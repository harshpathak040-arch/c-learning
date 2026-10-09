#include <iostream>
using namespace std;    


int globalStock = 100; // it can be accessed by a function if it is under the scope of the function 
//{}this is called scope of the function of the function 

void pourchai(int &cups){
    cups = cups +1;
    cout <<" poured cups :"<< cups << endl;

}
int main (){
    int chaicups = 2;
    pourchai(chaicups);
    cout<< "chaicups:"<< chaicups<<endl;
    
    //function overloading - when we have same function name but different parameters  or different data types then it cause fuction overloading and we can use the same function name for different purposes
    void serveChai(int cup, int price);

    void serveChai(int cups);

    void serveChai(string teaTypes = "Green tea"){
        int cups = 2;
         cout<< "serving " << teaTypes << endl;
    }


return 0;

}