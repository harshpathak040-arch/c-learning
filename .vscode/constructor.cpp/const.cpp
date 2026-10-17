//constructor have same name as class

#include<iostream>
#include<vector>

using namespace std;

class chai {
public:
    string teaName;
    int servings;
    vector<string>ingridients;
// default constructor called 

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
