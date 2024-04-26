#include <iostream>
using namespace std;

int main (){
    int dimention;

    cout << "Enter dimention of array: ";
    cin >> dimention;

    while (dimention > 3) {
        cout << "dimention exceeds 3. please try again: ";
        cin >> dimention;
    } 
    
    double** array = new double*[dimention];
    for (int i = 0;
     i < dimention; ++i) {
        array[i] = new double[dimention];
    }

    for (int i = 0; i < dimention; ++i){
        for (int j = 0; j < dimention; ++j){
            cout << "enter value of element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "Value of each element: " << endl;
    for (int i = 0; i < dimention; ++i) {
        for (int j = 0; j < dimention; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < dimention; ++i) {
        delete[] array[i];
    }

    delete[] array;

    return 0;
}