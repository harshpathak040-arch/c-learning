#include<iostream>
#include<string>

using namespace std;
// abstract class 
class Tea{
    public:
         virtual void prepareIngredients() = 0; //pure virtual function 
         virtual void brew() = 0; //pure virtual function 
         virtual void serve() = 0; //pure virtual function 
    
        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

