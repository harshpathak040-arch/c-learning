#include<iostream>
#include<string>

using namespace std;

int main (){
string TeaOrder;

cout<< "Enter your tea order"<<endl;
//for getting input form user
getline(cin, TeaOrder);

if (TeaOrder == "Green Tea"){
    cout << "You have ordered Green Tea"<<endl;
}

return 0;

}


