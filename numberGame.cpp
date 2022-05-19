// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on April 2022
// The date calculator

#include <iostream>
#include <string>



int main() {
    // this function helps gandma
    std::string ageString;
    int age;


    std::cout << "Are you old enough to date my gradchild";
    // input
    std::cout << "" << std::endl;
    std::cout << "enter age: ";
    std::cin >> ageString;

    // process
    try {
        age = std::stoi(ageString);
        if (age >= 25 && AGE <= 40) {
           std::cout << "You may date my grandchild";
        } else {
            std::cout << "You may NOT date my grandchild";
        }
    } catch (std::invalid_argument) {
        std::cout << "\nNot an age";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
