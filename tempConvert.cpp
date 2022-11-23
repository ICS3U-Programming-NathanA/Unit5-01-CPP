// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Nov.22, 2022
// This program converts the temperature in celsius to fahrenheit, it then displays it to the user

#include <iostream>
#include <string>

// Function for converting celsius to fahrenheit
void fahrenheit() {
    // Declaring variables
    float tempC, tempF;
    std::string tempCStr;

    // Asks the user for the temperature in Celsius
    std::cout << "Enter the temperature in celsius : ";
    std::cin >> tempCStr;

    // Try catch to catch if the user entered a string
    try {
        tempC = std::stof(tempCStr);

        // Calculates the temperature in fahrenheit
        tempF = tempC * 9 / 5 + 32;

        // Displays the temperature in fahrenheit
        std::cout << tempC << " degrees in celsius = "
        << tempF << " degrees in fahrenheit";
        std::cout << "\n";
    } catch (...) {
    std::cout << "You must enter a number.\n";
    }
}

int main() {
    // Calls the fahrenheit function
    fahrenheit();
}
