#include <iostream>
#include<string>
using namespace std;

int main() {
    string elements [] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    for (const auto & elements : elements) {
        if (elements [0] == 'B') {
            cout << elements << endl;
        } 
    }

    return 0;
}