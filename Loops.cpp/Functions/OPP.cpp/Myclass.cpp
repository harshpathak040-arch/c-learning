#include<iostream>
#include<vector> // it is a sequence container it stores
                    //elements in linear arrangement and allows 
                    //fast random access to any element.


using namespace std; 

class Chai{
     //data members/attributes 
     public: //acces modifier public means it can be accessed from anywhere in the program
string Teaname; 
int servings ;
vector<string>ingredients ;// list of ingredients

//we can also define functionality by member function 

void displayChaiDetails(){
    cout<< "tea Name:"<<Teaname<<endl;
    cout<< "servings:"<<servings<<endl;
    cout<< "ingredients:"<<endl;
    for (string ingredient: ingredients){
        cout<< ingredient<<" ";


    }
}

};

int main (){
     Chai chaiOne;
 chaiOne.Teaname = "Green tea";
chaiOne.servings = 2;
chaiOne.ingredients = {"water","tea leaves","sugar","milk"};

chaiOne.displayChaiDetails();

Chai chaiTwo;

chaiTwo.Teaname= "Milk Tea";
chaiTwo.servings =2;
chaiOne.ingredients={"water,""Tea leaves","suger","Milk"};


chaiTwo.displayChaiDetails();
}



