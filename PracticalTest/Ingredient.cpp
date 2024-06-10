# include <iostream>
#include <string>

enum class TypeOfIngredient {
    None,
    Flour,
    Egg,
    Sugar,
    Salt,
    BakingPowder,
    Milk
};

class Ingredient {
private:
    double amount;  
    TypeOfIngredient type;  

public:
    Ingredient() : amount(0), type(TypeOfIngredient::None) {}

    Ingredient(double amt, TypeOfIngredient tp) : amount(amt), type(tp) {}

    double getAmount() const {
        return amount;
    }

    void setAmount(double amt) {
        amount = amt;
    }

    TypeOfIngredient getType() const {
        return type;
    }

    void setType(TypeOfIngredient tp) {
        type = tp;
    }

    bool operator==(const Ingredient& other) const {
        return this->type == other.type;
    }

    std::string IngredientName() const {
        switch (type) {
            case TypeOfIngredient::None:
                return "None";
            case TypeOfIngredient::Flour:
                return "Flour";
            case TypeOfIngredient::Egg:
                return "Egg";
            case TypeOfIngredient::Sugar:
                return "Sugar";
            case TypeOfIngredient::Salt:
                return "Salt";
            case TypeOfIngredient::BakingPowder:
                return "Baking Powder";
            case TypeOfIngredient::Milk:
                return "Milk";
            default:
                return "Unknown";
        }
    }
};

int main() {
    Ingredient ingredient1;
    Ingredient ingredient2(250, TypeOfIngredient::Sugar);

    std::cout << "Ingredient 1: " << ingredient1.IngredientName() << ", Amount: " << ingredient1.getAmount() << "\n";
    std::cout << "Ingredient 2: " << ingredient2.IngredientName() << ", Amount: " << ingredient2.getAmount() << "\n";

    ingredient1.setAmount(100);
    ingredient1.setType(TypeOfIngredient::Flour);

    std::cout << "Updated Ingredient 1: " << ingredient1.IngredientName() << ", Amount: " << ingredient1.getAmount() << "\n";

    if (ingredient1 == ingredient2) {
        std::cout << "Ingredient 1 and Ingredient 2 are of the same type.\n";
    } else {
        std::cout << "Ingredient 1 and Ingredient 2 are of different types.\n";
    }

    return 0;

}