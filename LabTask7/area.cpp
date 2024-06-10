#include "area.h"
#include <cmath>

float Area::calculateArea(const shapes::Square& square) {
    float side = square.getSideLength();
    return side * side;
}

float Area::calculateArea(const shapes::Triangle& triangle){
    float base = triangle.getBase();
    float height = triangle.getHeight();
    return 0.5 * base * height;
}

float Area::calculateArea(const shapes::Circle& circle){
    float radius = circle.getRadius();
    return M_PI * radius * radius;
}