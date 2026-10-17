//constructor have same name as class,A constructor is a special member function of a class that is automatically called when an object of the class is created. It is used to initialize the object's data members.

#include<iostream>
#include<vector>

using namespace std;

class chai {
public:
    string teaName;
    int servings;
    vector<string>ingridients;
// default constructor called A default constructor is a constructorthat takes no arguments. It is automatically called when an object is created without passing any arguments. It is used to initialize an object with default values.

    chai(){
        teaName= "tazaTea";
        ingridients = {"water","tea leaves", "milk"};
        cout<<"constructor called"<<endl;

    }
    
    void displayChaiDetails(){
        cout<<"tea Name:"<<teaName<< endl;
        cout<< "servings:"<<servings << endl;
        cout<< "ingrediensts:";
        for(string ingridient: ingridients){
            cout<< ingridient<<"";


        }
        cout<< endl;

    }
};
int main (){
    chai defaultchai;
    defaultchai.displayChaiDetails();
    return 0;
}
