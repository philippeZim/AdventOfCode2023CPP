#include "./SolutionDay1.h"

SolutionDay1::SolutionDay1() {
    inputFile.open("../Day1/input.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();
}

int SolutionDay1::part1() {
    int res = 0;
    for (std::string s : this->lines) {
        int cur = 0;
        for (char c : s) {
            if (c >= '0' && c <= '9') {
                cur += 10 * (int(c) - 48);
                break;
            }
        }
        for (int i = s.size() - 1; i > -1; --i) {
            if (s[i] >= '0' && s[i] <= '9') {
                cur += int(s[i]) - 48;
                break;
            }
        }
        res += cur;
    }
    return res;
}

std::string SolutionDay1::replace(std::string input, std::string from, std::string to) {
    std::string res;
    int ind = 0;
    while (ind < input.size()) {
        if (input[ind] == from[0]) {
            bool found = true;
            for (int i = 0; i < from.size(); i++) {
                if (from[i] != input[ind + i]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                res += to;
                ind += from.size();
            } else {
                res += input[ind];
                ++ind;
            }
        } else {
            res += input[ind];
            ++ind;
        }
    }
    return res;
}

int SolutionDay1::part2() {
    std::string nums[9] = {"one", "two", "three", "four", "five",
                          "six", "seven", "eight", "nine"};
    for (int i = 0; i < this->lines.size(); ++i) {
        for (int j = 0; j < 9; ++j) {
            std::string newNum = nums[j][0] + std::to_string(j + 1) + nums[j][nums[j].size() - 1];
            this->lines[i] = replace(this->lines[i], nums[j], newNum);
        }
    }
    return part1();
}



