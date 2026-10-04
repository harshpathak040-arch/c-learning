#include<iostream>
#include<string>

using namespace std;

int main (){
int teaCups;

cout<< "Enter the number of teaCups to serve"<<endl;

 cin >> teaCups;

 //While loop

 while (teaCups>0){
    cout << "Servering a cup of tea\n"<<teaCups<<"reamining"<<endl;
    teaCups--;

 }

cout <<"All tea cups are served "<<endl;
return 0;

}


