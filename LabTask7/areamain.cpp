#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;
using namespace shapes;

int main() {
    char choose;
    while (true) {
        cout << "Choose options 1, 2, 3, or 4: " << endl;
        cout << "1. Calculate the are of a square" << endl;
        cout << "2. Calculate the are of a triangle" << endl;
        cout << "3. Calculate the are of a circle" << endl;
        cout << "4. Quit" << endl;
        cin >> choose;
         
        switch (choose) {
            case 1: {
                float side;
                cout << "Please enter side of square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square is: " << Area::calculateArea(square) << endl;
                break;
            }

            case 2: {
                float base, height;
                cout << "Please enter base and height of triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle is: " << Area::calculateArea(triangle) << endl;
                break;
            }

            case 3: {
                float radius;
                cout << "Please enter radius of circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle is: " << Area::calculateArea(circle) << endl;
                break;
            }

            case 4: 
                cout << "Quitting program......" << endl;
                return 0;
                break;
        }
    }
    return 0;
}