// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: March 2022
// This program will tell you a month
//   with user inputted integers

#include <iostream>
#include <string>

int main() {
    // this program prints out a month
    std::string monthNumberAsString;
    int monthAsInt;

    // input
    std::cout << "Enter the number of a month (ex: 9 for September): ";
    std::cin >> monthNumberAsString;

    monthAsInt = atoi(monthNumberAsString.c_str());

    // output
        switch (monthAsInt) {
            case 1 :
                std::cout << "\nThis is the month of January" << std::endl;
                break;
            case 2 :
                std::cout << "\nThis is the month of February" << std::endl;
                break;
            case 3 :
                std::cout << "\nThis is the month of March" << std::endl;
                break;
            case 4 :
                std::cout << "\nThis is the month of April" << std::endl;
                break;
            case 5 :
                std::cout << "\nThis is the month of May" << std::endl;
                break;
            case 6 :
                std::cout << "\nThis is the month of June" << std::endl;
                break;
            case 7 :
                std::cout << "\nThis is the month of July" << std::endl;
                break;
            case 8 :
                std::cout << "\nThis is the month of August" << std::endl;
                break;
            case 9 :
                std::cout << "\nThis is the month of September" << std::endl;
                break;
            case 10 :
                std::cout << "\nThis is the month of October" << std::endl;
                break;
            case 11 :
                std::cout << "\nThis is the month of November" << std::endl;
                break;
            case 12 :
                std::cout << "\nThis is the month of December" << std::endl;
                break;
            default :
                std::cout << "\nNot a valid month number." << std::endl;
    }
}
