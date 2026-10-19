#include <iostream>
#include <string>
#include <vector>
using namespace std;

class chai {
public:
    string* teaName;
    int servings;
    vector<string> ingridients;

    chai(string name, int serve, vector<string> ingr) {
        teaName = new string(name);
        servings = serve;
        ingridients = ingr;
        cout << "para constructor called" << endl;
    }

    chai(const chai& other) {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingridients = other.ingridients;
        cout << "copy const called" << endl;
    }

    void displayChaiDetails() {
        cout << "Tea Name: " << *teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";

        for (string ingredient : ingridients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
//copy constructor -
    ~chai() {
        delete teaName;
        cout << "destructor called" << endl;
    }
};

int main() {
    chai lemonTea("lemon Tea", 2,
                  {"water", "lemon", "honey"});

    lemonTea.displayChaiDetails();

    chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = "modified Lemon tea";

    cout << "\nLemon tea:" << endl;
    lemonTea.displayChaiDetails();

    cout << "\nCopied Tea:" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}