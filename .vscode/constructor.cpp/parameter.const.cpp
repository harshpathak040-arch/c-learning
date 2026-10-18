#include<iostream>
#include<vector>

using namespace std;

class chai {
public:
    string teaName;
    int servings;
    vector<string>ingridients;
//parameter constructor 
    chai(string name, int serve, vector<string>ingr){
        teaName= "name"
        servings = serve;
        ingridients = ingr;
        cout<<"constructor called"<<endl;

    }
    
    void displayChaiDetails(){
        cout<<"tea Name:"<<teaName<< endl;
        cout<< "Servings:"<<servings << endl;
        cout<< "ingrediensts:";
        for(string ingridient: ingridients){
            cout<< ingridient<<" ";


        }
        cout<< endl;

    }
};
int main (){
    chai lemonTea("lemon Tea",2,{"water","lemon","honey"});
    lemonTea.displayChaiDetails();
    return 0;
}
