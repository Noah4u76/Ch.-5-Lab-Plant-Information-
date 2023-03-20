//
// File: Plant.h
// Description: Plant Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef PLANTH
#define PLANTH

#include <string>
using namespace std;

class Plant {
   public:
      virtual ~Plant();

      void SetPlantName(string userPlantName);

      string GetPlantName() const;

      void SetPlantCost(int userPlantCost);

      int GetPlantCost() const;

      virtual void PrintInfo() const;

   protected:
      string plantName;
      int plantCost;
};

#endif