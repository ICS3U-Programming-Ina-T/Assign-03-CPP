// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 11, 2021
// This program determines if a user is
// eligible to vote. It also tests an additional
// person upon the users request

#include <iostream>
#include <string>

// this function checks the eligibilty
// of a second person
int person() {
    // defines variables
    std::string newName;
    std::string newAgeString;
    int newAgeInt;

    // receives input from the user
    std::cout << "Enter their name: ";
    std::cin >> newName;
    std::cout << "Enter their age: ";
    std::cin >> newAgeString;
    std::cout << std::endl;

    try {
        // convert the user's guess to an int
        newAgeInt = std::stoi(newAgeString);

        if (newAgeInt >= 18) {
            // output
            std::cout << newName << " is eligible to vote!";
            std::cout << std::endl;
            std::cout << "Thanks for playing!";
        } else if (newAgeInt < 0) {
            std::cout << "Please enter a valid age.";
        } else if (newAgeInt < 18) {
            std::cout << newName << " is not eligible to vote.";
            std::cout << std::endl;
            std::cout << newName << " must be 18 or older.";
        } else {
            std::cout << "Please enter a valid age.";
        }
    // determines if the the answer is a number
    } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << newAgeString << " is not a number.\n";
    }
}


// checks if the user wants to test
// another person
int age() {
    // defines variables
    int userAgeInt;
    std::string yes = "yes";
    std::string no = "no";

    // gets input from user
    std::cout << "Would you like to test someone else's age? (yes/no): ";
    std::cin >> otherAge;
    std::cout << std::endl;

    if (otherAge == yes) {
    // output
        std::cout << "That's wonderful!\n";
        person();
    } else if (otherAge == no) {
        std::cout << std::endl;
        std::cout << "Thanks for playing!";
    } else {
        std::cout << "Please enter a valid age.";
    }
}


// checks the users voting eligibility
int main() {
    // defines variables
    std::string userAgeString;
    int userAgeInt;

    // receives input from the user
    std::cout << "Enter your age: ";
    std::cin >> userAgeString;
    std::cout << "" << std::endl;

    try {
        // convert the user's guess to an int
        userAgeInt = std::stoi(userAgeString);

        if (userAgeInt >= 18) {
            // output
            std::cout << "You are eligible to vote!";
            std::cout << std::endl;
            std::cout << std::endl;
            age();
        } else if (userAgeInt < 0) {
            std::cout << "Please enter a valid age.";
        } else if (userAgeInt < 18) {
            std::cout << "Sorry, you are not eligible to vote.";
            std::cout << std::endl;
            std::cout << "You must be 18 or older.";
            std::cout << std::endl;
            std::cout << std::endl;
            age();
        } else {
            std::cout << "Please enter a valid age.";
        }
    // determines if the the answer is a number
    } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << userAgeString << " is not a number.\n";
    }
}
