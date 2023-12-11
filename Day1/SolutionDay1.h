#ifndef SOLUTIONDAY1_H
#define SOLUTIONDAY1_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class SolutionDay1 {
private:
    std::ifstream inputFile;
    std::vector<std::string> lines;
public:
    SolutionDay1();
    int part1();
    int part2();
    std::string replace(std::string input, std::string from, std::string to);
};

#endif