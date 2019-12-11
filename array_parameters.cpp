// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: December 2019
// This program finds the greatest number from a list

#include <iostream>
#include <time.h>
#include <array>
#include <fstream>


template<size_t N>
int FindMax(std::array<int, N> listOfNumbers) {
    // this functions finds the greatest number
    int greatestNum = 0;

    // process
    for (int counter = 0; counter < listOfNumbers.size(); counter++) {
        if (greatestNum < listOfNumbers[counter]) {
        greatestNum = listOfNumbers[counter]; }
    }
    return greatestNum;
}

main() {
    // this function shows the greatest number
    std::array<int, 10> randomNumbers;
    int greatest;
    int num;

    // initialize random seed:
    unsigned int seed = time(NULL);

    // output
    std::cout << "Let's find the greatest number." << std::endl;

    // process
    for (int counter = 0; counter < 10; counter++) {
        num = rand_r(&seed) % 100 + 1;
        std::cout << num << std::endl;
        randomNumbers[counter] = num; }

    // call function
    greatest = FindMax(randomNumbers);

    // output
    std::cout << std::endl;
    std::cout << "The greatest number from this list is: "
              << greatest << std::endl;
}
