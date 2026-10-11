#include<iostream>
#include<vector> // it is a sequence container it stores
                    //elements in linear arrangement and allows 
                    //fast random access to any element.


using namespace std; 

class chai{
     //data members/attributes 
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

}



