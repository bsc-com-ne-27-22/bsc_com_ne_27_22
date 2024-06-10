#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
        private:
           float radius;

        public:
           Circle();
           Circle(float r);

           float getRadius() const;

           ~Circle();
    };
}


#endif