// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Nov, 8, 2023
// This program will ask the user
// for a integer and it will tell them the factorial
// of the number with try catch

#include <iostream>
#include <string>

int main() {
    // Declare userNumStr
    std::string userNumStr;

    // initialize counter and factorial variables
    int counter = 1;
    int factorial = 1;

    // Get the userNumStr and display a message about the program
    std::cout << "This program will ask the user";
    std::cout << " for a integer and it will tell them the factorial";
    std::cout << " of the numbers.";
    std::cout << "\nEnter your positive integer: ";
    std::cin >> userNumStr;

    try {
        // Convert userNumStr to int
        int userNumInt = std::stoi(userNumStr);

        // check if user number is negative
        if (userNumInt < 0) {
            // display that user number is not positive
            std::cout << userNumInt << " is not a positive int."
                      << std::endl;
        } else {
             do {
                // calculate factorial
                factorial = factorial * counter;

                // display how may times it loops
                std::cout << "The loop ran " << counter << " times."
                          << std::endl;

                // increment counter
                counter = counter + 1;
             } while (counter <= userNumInt);

             // display factorial
             std::cout << "\nThe factorial of "
                       << userNumInt << " is " << factorial << std::endl;
        }
    } catch (std::invalid_argument) {
        // Display that the user number was not valid
        std::cout << userNumStr << " is not a valid int." << std::endl;
    }
}
