#pragma once

#include <iostream>
using namespace std;

class Box {
    public:

      Box();

      Box(const double newLength, const double newBreath, const double newHeight);

      ~Box();

      double GetVolume();

      void SetLength(double len);

      void SetBreadth(double bre);

      void SetHeight(double hei);
      //Overload + operator to add two Box object. 
      Box operator+(const Box& b);

    private:
      double length; // Length of box
      double breadth; // Breadth of box
      double height; // Height of box

};