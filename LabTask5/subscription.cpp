#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand (static_cast<int>(time(nullptr)));
    int daysUntilExpiration = rand () % 12;

    if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired! ";
    }
    else if (daysUntilExpiration == 1){
        cout << "Your subscription within a day! Renew now and save 20%";
    }
    else if (daysUntilExpiration <= 5){
        cout << "Your subscription expires in " << daysUntilExpiration <<"Renew now and save 10% ";
    }
    else if (daysUntilExpiration <= 10){
        cout << "Your subscription will expire soon! Renew now!";
    }
    else{
        cout << "You have an active subscription ";
    }

    return 0;
}