#include <iostream>
#include "person.h"

using namespace std;

int main() {
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalWeight = Jane + John;
    cout << "Total weight is: " << totalWeight << endl;

    return 0;
}