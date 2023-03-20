//
// File: Plant.cpp
// Description: Plant Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Plant.h"
#include <iostream>

Plant::~Plant() {};

void Plant::SetPlantName(string userPlantName) {
   plantName = userPlantName;
}

string Plant::GetPlantName() const {
   return plantName;
}

void Plant::SetPlantCost(int userPlantCost) {
   plantCost = userPlantCost;
}

int Plant::GetPlantCost() const {
   return plantCost;
}

void Plant::PrintInfo() const {
   cout << "   Plant name: " << plantName << endl;
   cout << "   Cost: " << plantCost << endl;
}