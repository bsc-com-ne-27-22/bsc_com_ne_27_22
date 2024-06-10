#include "rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::~Rectangle() {
    // Destructor
}

void Rectangle::setLength(float l){
          length = l;
       }
void Rectangle::setWidth(float w){
          width = w;
       }

float Rectangle::getLength(){
          return length;
       }

float Rectangle::getWith(){
          return width;
       }

float Rectangle::calculateArea(){
          return length * width;
       }