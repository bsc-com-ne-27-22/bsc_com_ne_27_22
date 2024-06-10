#include <iostream>
#include <cmath>
using namespace std;

float calculateSquareArea (float side);

float calculateRectangleArea (float length, float width);

float calculateTriangleArea (float base, float height);

int main(){
    int choice;

    cout << "Please select the area of the shape to calculate " << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle " << endl;
    cout << "3. Triangle " << endl;
    cout << "4. Quit program " << endl;
    cout << "Enter selection ";
    cin >> choice;

    while (choice != 1 && choice != 2 && choice != 3 && choice != 4){
        cout << "Invalid choice. Please enter valid input: ";
        cin >> choice;
    }

    float side, length, width, base, height;

    switch (choice){
        case 1:
        cout << "Enter side: ";
        cin >> side;
        cout << "Area is: " << calculateSquareArea(side) << endl;
        break;
        case 2:
        cout << "enter length: ";
        cin >> length;
        cout << "enter width: ";
        cin >> width;
        cout << "area is: " << calculateRectangleArea(length, width) << endl;
        break;
        case 3:
        cout << "enter base: ";
        cin >> base;
        cout << "enter height: ";
        cin >> height;
        cout << "area is: " << calculateTriangleArea(base, height) << endl;
        break;
        case 4:
        cout << "Exiting program " << endl;
        return 0;
        break;
    }

    return 0;

}

float calculateTriangleArea(float base, float height){
    return 0.5*base*height;
}

float calculateRectangleArea(float length, float width){
    return length*width;
}

float calculateSquareArea(float side){
    return side*side;
}