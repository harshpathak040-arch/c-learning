#include<iostream>
#include<vector>

using namespace std;


class Chai{
    public 
        string TeaName;
        int servings ;
        vector<string> ingredients;
        
};
int main (){
    Chai quickChai("Quick Chai");
    quickChai.displayChaiDetails()

}