//we can write reusable code 

//returnType functionName(parameters) {
//    // function body
//    return value;
//} type - void, 

#include <iostream>
using namespace std;

int checkPrice(int price){

    return price;
}

int main (){
    int price = checkPrice(1000);
    cout<<price;
    return 0;
    
}
