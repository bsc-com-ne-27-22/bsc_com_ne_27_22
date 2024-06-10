#include <iostream>

using namespace std;


    enum class TypeOfIngredient{
        None,
        Flour,
        Egg,
        Sugar,
        Salt,
        BakingPowder,
        Milk
    };

int main () {
    TypeOfIngredient ingredient = TypeOfIngredient::Sugar;

    switch (ingredient) {
        case TypeOfIngredient::None:
            std::cout << "None\n";
            break;
        case TypeOfIngredient::Flour:
            std::cout << "Flour\n";
            break;
        case TypeOfIngredient::Egg:
            std::cout << "Egg\n";
            break;
        case TypeOfIngredient::Sugar:
            std::cout << "Sugar\n";
            break;
        case TypeOfIngredient::Salt:
            std::cout << "Salt\n";
            break;
        case TypeOfIngredient::BakingPowder:
            std::cout << "Baking Powder\n";
            break;
        case TypeOfIngredient::Milk:
            std::cout << "Milk\n";
            break;
    }

    return 0;
}