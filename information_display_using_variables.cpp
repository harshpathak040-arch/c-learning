#include<iostream>
#include<string>
using namespace std;

int main(){

 
    string TeaTypes[5]; {
    TeaTypes[0]  = "GingerTea";
    TeaTypes[1] = "LemonTea";
    TeaTypes[2] = "SimpleTea";
    TeaTypes[3] = "GreenTea";
    TeaTypes[4] = "BlackTea";
    }
    float TeaPrice[5];
    TeaPrice[0] = 20.5;
    TeaPrice[1] = 20.50;
    TeaPrice[2] = 10.25;
    TeaPrice[3] = 40.50;
    TeaPrice[4] = 30.50;
    

    char TeaQuality[5];
    TeaQuality[0]='A';
    TeaQuality[1]='A';
    TeaQuality[2]='B';
    TeaQuality[3]='C';
    TeaQuality[4]='A';

    // cout<<"These are the types of tea we have:"<<TeaTypes<<endl;
    // cout<<"These are the prices of the teas:"<<TeaPrice<<endl;
    // cout<<"These are the qualities of the teas:"<<TeaQuality<<endl;

    string userTea;
    cout <<"These are the types of tea we have:"<< endl;
    cout << "Tea types: " << TeaTypes[0] << ", " << TeaTypes[1] << ", "
         << TeaTypes[2] << ", " << TeaTypes[3] << ", " << TeaTypes[4] << endl;
    cout<<"Please enter the tea you want to order:"<<endl;     
    getline(cin, userTea);

    string userTeaPrice;
    cout<< "These are the prices of the teas:"<< endl;
    cout<< "Tea prices:"<<TeaPrice[0]<<", "<<TeaPrice[1]<<", "<<TeaPrice[2]<<", "<<TeaPrice[3]<<", "<<TeaPrice[4]<<endl;
    cout<<"This is your tea price= TeaType*TeaPrice:"<<endl;
    getline(cin, userTeaPrice);

    return 0;
    




}
