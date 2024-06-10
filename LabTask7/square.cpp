#include "square.h"

namespace shapes {
    Square::Square() : sidelength(0) {}

    Square::Square(float side) : sidelength(side) {}

    float Square::getSideLength() const{
        return sidelength;
    }

    Square::~Square(){
        // Destructor
    }
}