//
// File: Flower.h
// Description: Plant Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef FLOWERH
#define FLOWERH

#include "Plant.h"
#include <string>
using namespace std;

class Flower : public Plant {
   public:
      void SetPlantType(bool userIsAnnual);

      bool GetPlantType() const;

      void SetColorOfFlowers(string userColorOfFlowers);

      string GetColorOfFlowers() const;

      void PrintInfo() const;

   private:
      bool isAnnual;
      string colorOfFlowers;
};

#endif