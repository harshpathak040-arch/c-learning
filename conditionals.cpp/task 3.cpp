#include<iostream>

using namespace std;

int main (){

int cups;

double pricePerCup = 2.5 , TotalPrice, Discount;

cout<<"Enter the number of cups"<<endl;
cin>> cups;
if (cups > 20){
    Discount = 0.20;
}


else if (cups >=10 && cups <= 20){
    Discount = 0.10;
}
    else {
        Discount = 0.0;

    }
    //for calculating total price
    TotalPrice -= TotalPrice*Discount;

    cout<<"Total price after Discount is:"<<TotalPrice<<endl;

return 0;
}


