//
// File: Main.cpp
// Description: Plant Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// DONE: Define a PrintVector function that prints an vector of plant (or flower) object pointers
void PrintVector(vector<Plant*> myGarden){
int j = 1;
for (size_t i = 0; i < myGarden.size(); ++i) {
   cout << "Plant " << j << " Information:" << endl;
       myGarden.at(i)->PrintInfo();
       cout << endl;
       ++j;
   } 
  
}

int main() {
   // DONE: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden;
   // DONE: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
  string plantName, flowerName, flowerTruthVal, colorFlower;
  int plantCost, flowerCost;
  string input;
  Plant* plantPtr;
  Flower* flowerPtr;
  bool isAnnual;

   cin >> input;

   while(input != "-1") {
   // DONE: Check if input is a plant or flower
   //       Store as a plant object or flower object
   //       Add to the vector myGarden
     if(input == "plant"){
       plantPtr = new Plant;
       cin >> plantName >> plantCost;
       plantPtr->SetPlantName(plantName);
       plantPtr->SetPlantCost(plantCost);
       myGarden.push_back(plantPtr);
       
     }
     else {
       flowerPtr = new Flower;
       cin >> flowerName >> flowerCost >> boolalpha >> isAnnual >> colorFlower;
       flowerPtr->SetPlantName(flowerName);
       flowerPtr->SetPlantCost(flowerCost);
       flowerPtr->SetPlantType(isAnnual);
       flowerPtr->SetColorOfFlowers(colorFlower);
       myGarden.push_back(flowerPtr); 
     }
      cin >> input;
   }

   // DONE: Call the method PrintVector to print myGarden
       PrintVector(myGarden);
   
   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}