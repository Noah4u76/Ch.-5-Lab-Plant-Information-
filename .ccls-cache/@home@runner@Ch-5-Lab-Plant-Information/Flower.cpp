//
// File: Flower.cpp
// Description: Plant Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Flower.h"
#include <iostream>

void Flower::SetPlantType(bool userIsAnnual) {
   isAnnual = userIsAnnual;
}

bool Flower::GetPlantType() const {
   return isAnnual;
}

void Flower::SetColorOfFlowers(string userColorOfFlowers) {
   colorOfFlowers = userColorOfFlowers;
}

string Flower::GetColorOfFlowers() const {
   return colorOfFlowers;
}

void Flower::PrintInfo() const {
   cout << "   Plant name: " << plantName << endl;
   cout << "   Cost: " << plantCost << endl;
   cout << "   Annual: " << boolalpha << isAnnual << endl;
   cout << "   Color of flowers: " << colorOfFlowers << endl;
}