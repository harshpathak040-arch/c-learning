#include<iostream>
using namespace std;


int toatalchaiServed(int chai[],int size ){
    int total = 0;
     for(int i= 0;i<size;i++){
        total = total+chai[i];

    }
    return total ;
    
// this will calculate the total number of cups in 5 days 
}
int total (){
    int chaiServed[5]= {50,60,70,55,65};
    int total= toatalchaiServed(chaiServed,5);
    return 0;
}