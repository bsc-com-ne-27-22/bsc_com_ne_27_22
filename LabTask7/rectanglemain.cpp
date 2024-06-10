//main.cpp

#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
    Rectangle rectan;

    float length, width;
    cout << "Enter length of lectangle: ";
    cin >> length;
    rectan.setLength(length);

    cout << "Enter width of rectangle: ";
    cin >> width;
    rectan.setWidth(width);

    cout << "Area of the rectangle is: " << rectan.calculateArea() << endl;

    return 0;
}