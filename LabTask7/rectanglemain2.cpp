#include <iostream>
#include "rectangle2.h"
using namespace std;

int main(){
    Rectangle rectangle1;

    float length, width;
    cout << "Enter length of first length: ";
    cin >> length;
    rectangle1.setLength(length);

    cout << "Enter width of first rectangle: ";
    cin >> width;
    rectangle1.setWidth(width);

    cout << "Area of first rectangle is: " << rectangle1.calculateArea() << endl;

    // Using overload constructor to create another rectangle
    cout << "\nEnter length of second rectangle: ";
    cin >> length;
    
    cout << "Enter width of second rectangle: ";
    cin >> width;
    Rectangle rectangle2(length, width);

    cout << "Area of second rectangle is: " << rectangle2.calculateArea() << endl;

    return 0;
}