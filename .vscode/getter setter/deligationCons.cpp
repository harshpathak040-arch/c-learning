#include<iostream>
#include<vector>

using namespace std;


class Chai{
    public:
        string TeaName;
        int servings ;
        vector<string> ingredients;
// deligating construtor
    Chai(string name):Chai(name, 1, {"water ,""Tea leaves"})
{}


        //main constructor
        Chai(string name, int serve, vector<string> ingr){
            TeaName= name;
            servings= serve;
            ingredients= ingr;
            cout << "main construtor called"<<endl;
        }
        void displayChaiDetails(){
            cout << "Tea: " << TeaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients:" << endl;
            for (const string& ingredient : ingredients){
                cout << "- " << ingredient << endl;
            }
        }
};
int main (){
    Chai quickChai("Quick Chai", 1, {"water", "tea leaves"});
    quickChai.displayChaiDetails();

}