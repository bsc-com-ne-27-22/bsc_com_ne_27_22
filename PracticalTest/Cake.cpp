#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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

class Cake {
private:
    static const int MAX_INGREDIENTS = 5;
    Ingredient* ingredients[MAX_INGREDIENTS];
    int numValidIngredients;  

    void initializeIngredients() {
        for (int i = 0; i < MAX_INGREDIENTS; ++i) {
            ingredients[i] = nullptr;
        }
    }

    void AddIngredient(const Ingredient& ingredient) {
        if (numValidIngredients < MAX_INGREDIENTS) {
            ingredients[numValidIngredients] = new Ingredient(ingredient);
            numValidIngredients++;
        } else {
            cerr << "Cannot add more ingredients.\n";
        }
    }

    void SaveIngredientsToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (int i = 0; i < MAX_INGREDIENTS; ++i) {
                if (ingredients[i] != nullptr) {
                    file << ingredients[i]->IngredientName() << ": " << ingredients[i]->getAmount() << "\n";
                }
            }
            file.close();
            cout << "Ingredients saved to " << filename << endl;
        } else {
            cerr << "Unable to open file " << filename << endl;
        }

    void ShowAllIngredients() const {
        for (int i = 0; i < MAX_INGREDIENTS; ++i) {
            if (ingredients[i] != nullptr) {
                cout << ingredients[i]->IngredientName() << ": " << ingredients[i]->getAmount() << endl;
            }
        }
    }
    }
    TypeOfIngredient SelectIngredientType() const {
        int choice;
        cout << "Select an ingredient type:\n";
        cout << "0. None\n1. Flour\n2. Egg\n3. Sugar\n4. Salt\n5. Baking Powder\n6. Milk\n";
        cin >> choice;
        switch (choice) {
            case 0: return TypeOfIngredient::None;
            case 1: return TypeOfIngredient::Flour;
            case 2: return TypeOfIngredient::Egg;
            case 3: return TypeOfIngredient::Sugar;
            case 4: return TypeOfIngredient::Salt;
            case 5: return TypeOfIngredient::BakingPowder;
            case 6: return TypeOfIngredient::Milk;
            default: return TypeOfIngredient::None;
        }
    }

public:
    Cake() : numValidIngredients(0) {
        initializeIngredients();
    }

    void bake() {
        int choice;
        do {
            cout << "1. Add Ingredient\n2. Show Ingredients\n3. Save Ingredients\n4. Exit\n";
            cin >> choice;
            switch (choice) {
                case 1: {
                    TypeOfIngredient type = SelectIngredientType();
                    double amount;
                    cout << "Enter amount: ";
                    cin >> amount;
                    AddIngredient(Ingredient(amount, type));
                    break;
                }
                case 2:
                    ShowAllIngredients();
                    break;
                case 3:
                    SaveIngredientsToFile("ingredients.txt");
                    break;
                case 4:
                    std::cout << "Exiting...\n";
                    break;
                default:
                    std::cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 4);
    }

    ~Cake() {
        for (int i = 0; i < MAX_INGREDIENTS; ++i) {
            delete ingredients[i];
        }
    }
};

int main() {
    Cake cake;
    cake.bake();
    return 0;
}