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

//drived class

class GreenTea : public Tea{
    public:
        void prepareIngredients() override{
            cout << "green leaves and water is ready "<< endl;
}
    void brew() override{
    cout << "Green tea is brewed"<< endl;
    }

    void serve() override{
        cout << " Green tea is served "<< endl;
    }
};

class MasalaTea : public Tea{
    public:
        void prepareIngredients() override{
            cout << "Masala and water is ready "<< endl;
}
    void brew() override{
    cout << "masala tea is brewed"<< endl;
    }

    void serve() override{
        cout << " masala tea is served "<< endl;
    }
};


}

int main (){
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea; 
    
    return 0;
}