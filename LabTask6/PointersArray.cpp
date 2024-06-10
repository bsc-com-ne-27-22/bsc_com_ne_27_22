#include <iostream>
using namespace std;

int main(){

    int numbersArray[5];

    int * pPointer = nullptr;
    
    //assign address to first element to pointer
    pPointer = numbersArray;

    *pPointer = 10; //assign value to first element

    pPointer++;
    *pPointer = 20; //assign value to second element

    pPointer = &numbersArray[2];
    *pPointer = 30;

    pPointer = numbersArray + 3;
    *pPointer = 40;

    pPointer = numbersArray;

    /*assign a value to the 5th element using indirect and pointer arithmetic*/
    *(p+4) = 50;

    for (int n = 0; n < 5; n++)
    {
        cout << numbersArray[n] << ",";
    }

    return 0;
}