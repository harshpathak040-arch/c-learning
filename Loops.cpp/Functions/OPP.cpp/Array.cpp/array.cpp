#include<iostream>
using namespace std;

int main(){
//array =  An array is a collection of elements of the same data type stored in contiguous memory locations and accessed using a common name and an index.
    int chaiTemp[5]={80,85,90,92,91};

    cout<<"Chai temp:";
    for(int i =0; i<5; i++){
        cout<< chaiTemp[i]<<"degree C\n";

    }
    return 0;
}