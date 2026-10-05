 #include<iostream>
#include<string>
using namespace std;

int main() {
    string teaTypes[3]={"Black tea","green tea","oolong tea"};
    //for loop to implement conditon to skip green tea
    
    for(int i=0; i<3; i++){
        if (teaTypes[i]=="green tea"){
            cout<< "green tea is not available"<<endl;
            continue;
        }


        cout<< "Brewing "<< teaTypes[i]<<endl;

    }

    return 0;
}


 