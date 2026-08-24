#include<iostream>
#include<string>
using namespace std;

int main(){

    int TeaTypes;
    string UserOrder;
    cout<<"Here are the types of tea we have:"<<endl;
    cout<<"Tea Types:"<<TeaTypes<<endl;

    getline(cin,UserOrder);

    string TeaNames[5];
    TeaNames[0] = "GingerTea";
    TeaNames[1] = "LemonTea";
    TeaNames[2] = "SimpleTea";
    TeaNames[3] = "GreenTea";
    TeaNames[4] = "BlackTea";

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

    cout<<"Tea Types:"<<TeaTypes<<endl;


return 0;




}
