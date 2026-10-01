#include<iostream>
using namespace std;

int main( ){
    int cups;
    double pricePerCup , TotalPrice, DiscountedPrice;
    cout<<"Enter the number of tea cups:";
    cin>> cups;
    cout<<"Enter the price per cup:";
    cin>> pricePerCup;

    TotalPrice = cups * pricePerCup;
    //apply 5% discount if the price is above 100

    if (TotalPrice > 100){
    
        DiscountedPrice = TotalPrice -(TotalPrice*0.05);
        cout<<"Discounted price is: "<<DiscountedPrice<<endl;

    }
    else{
        cout<<"Total price is "<<TotalPrice<<endl;

    }




