#include <iostream>
#include "./Day1/SolutionDay1.h"

void runDay1() {
    SolutionDay1 s;
    int res1 = s.part1();
    int res2 = s.part2();
    std::cout << "Day 1 Part 1: " << res1 << "\n";
    std::cout << "Day 1 Part 2: " << res2 << "\n";
}
int main() {
    runDay1();

    return 0;
}
