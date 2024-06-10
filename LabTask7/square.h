#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square{
        private:
           float sidelength;

        public:
           Square();
           Square(float side);

           float getSideLength() const;

           ~Square();
    };
}

#endif