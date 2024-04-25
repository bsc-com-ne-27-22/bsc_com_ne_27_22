#include <iostream>
using namespace std;

int main () {
    int value;
    while (true) {
        cout << "Enter an integer value between 5 and 10: " << endl;
        cin >> value;

        if (value >= 5 && value <= 10) {
            cout << "Your input value (" << value << ") has been accepted." << endl;
            break;
        } else {
            cout << "You entered "<< value << " Please enter a number between 5 and 10. " << endl;
        }
    }

    return 0;
}