#include <iostream>
#include <string>
using namespace std;

int main() {
    int* dynamicInt = new int;
    string* dynamicString = new string;

    cout << "Enter integer: ";
    cin >> *dynamicInt;

    cout << "Enter string: ";
    cin >> *dynamicString;

    cout << "Value of integer is: " << *dynamicInt << endl;

    cout << "Value of string is: " << *dynamicString << endl;

    delete dynamicInt;
    delete dynamicString;

    return 0;
}