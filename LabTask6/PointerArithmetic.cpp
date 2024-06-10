#include <iostream>
using namespace std;

int main() {

    int* pPointer = nullptr;

    int numberArray[3] = {10, 20, 30};

    pPointer = numberArray;

    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numberArray[0]: " << numberArray << endl;

    cout << "Value at pPointer: " << *pPointer << endl;

    cout << "Value at ++pPointer: " << *(++pPointer) << endl;

    pPointer = numberArray;

    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
}