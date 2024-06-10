#include "triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(float b, float h) : base(b), height(h) {}

    float Triangle::getBase() const {
        return base;
    }
    float Triangle::getHeight() const {
        return height;
    }
    Triangle::~Triangle() {
        //Destructor
    }
}