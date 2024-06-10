#include "circle.h"

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(float r) : radius(r) {}

    float Circle::getRadius() const {
        return radius;
    }

    Circle::~Circle() {
        // Destructor
    }
}