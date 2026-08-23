#include<iostream>
#include<string>

using namespace std;

int main()
{
    string userTea;
    int TeaQuantity;
     

    cout<<"What would u like to order in tea?"<<endl;
    getline(cin,userTea);

    //ask for tea quantity

    cout<<"How many cups of "<< userTea<<" would you like to Have?"<<endl;
    cin>>TeaQuantity;

    cout << TeaQuantity;
cout << userTea; 
    return 0;
}