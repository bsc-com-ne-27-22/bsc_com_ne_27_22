#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
        private:
           float base;
           float height;

        public:
           Triangle();
           Triangle(float b, float h);

           float getBase() const;
           float getHeight() const;

           ~Triangle();
    };
}

#endif