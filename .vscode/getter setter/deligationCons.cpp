#include<iostream>
#include<vector>

using namespace std;


class Chai{
    public 
        string TeaName;
        int servings ;
        vector<string> ingredients;

        //main constructor
        Chai(string name, int serve, vector<string> ingr){
            TeaName= name;
            servings= serve;
            ingredients= ingr;

            cout<<"" main construtor called"<<endl;

        }
};
int main (){
    Chai quickChai("Quick Chai");
    quickChai.displayChaiDetails()

}