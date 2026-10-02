#include<iostream>
#include<string>

using namespace std;

int main (){
string TeaOrder;

cout<< "Enter your tea order"<<endl;

getline(cin, TeaOrder);

if (TeaOrder == "Green Tea"){
    cout << "You have ordered Green Tea"<<endl;
}

return 0;

}


