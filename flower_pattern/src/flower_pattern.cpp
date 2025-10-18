//============================================================================
// Name        : flower_pattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int rows = 7; // You can adjust the number of rows as needed

    // Print upper part of the flower
    for (int i = 1; i <= rows; i += 2) {
        // Print spaces before the stars
        for (int j = 0; j < (rows - i) / 2; ++j) {
            std::cout << " ";
        }

        // Print stars
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;
    }

    // Print lower part of the flower
    for (int i = rows - 2; i >= 1; i -= 2) {
        // Print spaces before the stars
        for (int j = 0; j < (rows - i) / 2; ++j) {
            std::cout << " ";
        }

        // Print stars
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}


