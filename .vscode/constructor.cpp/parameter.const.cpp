#include<iostream>
#include<vector>

using namespace std;

class chai {
public:
    string* teaName;
    int servings;
    vector<string> ingridients;

    // parameter constructor- it is a special member function of a 
    // class that accepts parameters to initialize an 
    // object with specific values at the time of its
    //  creation
    chai(string name, int serve, vector<string> ingr) {
        teaName = new string(name);
        servings = serve;
        ingridients = ingr;
        cout << " para constructor called" << endl;
    }

    void displayChaiDetails() {
        cout << "tea Name:" << teaName << endl;
        cout << "Servings:" << servings << endl;
        cout << "ingrediensts:";
        for (string ingridient : ingridients) {
            cout << ingridient << " ";
        }
        cout << endl;
    }
    //distructor - A destructor is a special member
    //  function of a class that is automatically called 
    //  when an object is destroyed. It is used to release
    //   resources acquired by the object.
    ~chai(){
delete teaName;
cout<< "distructor called"<<endl;
    }
};

int main() {
    chai lemonTea("lemon Tea", 2, {"water", "lemon", "honey"});
    
    lemonTea.displayChaiDetails();

    //copy the obeject

    chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = "modified Lemon tea";
    cout << "Lemon tea"<<endl;
    lemonTea.displayChaiDetails();
    cout << "copied Tea"<<endl;
    copiedChai.displayChaiDetails();
    return 0;
}
