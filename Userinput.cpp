#include<iostream>
#include<string>

using namespace std;

int main()
{
    string userCar;
    int Carmodel;
     

    cout<<"What car you want to perchase?"<<endl;
    getline(cin,userCar);

    //ask for car 

    cout<<"What car You want"<<userCar<<"Whcih model do you want ?";
    cin>>Carmodel;

    cout<< Carmodel;

    
    return 0;
}