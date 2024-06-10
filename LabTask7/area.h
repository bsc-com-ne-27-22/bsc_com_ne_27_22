#ifndef AREA_H
#define AREA_H

#include "square.h"
#include "triangle.h"
#include "circle.h"

class Area {
    public: 
       static float calculateArea(const shapes::Square& square);
       static float calculateArea(const shapes::Triangle& triangle);
       static float calculateArea(const shapes::Circle& circle);
};

#endif