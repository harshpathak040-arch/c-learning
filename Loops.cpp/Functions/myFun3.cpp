#include <iostream>
using namespace std;    



void pourchai(int &cups){
    cups = cups +1;
    cout <<" poured cups :"<< cups << endl;

}
int main (){
    int chaicups = 2;
    pourchai(chaicups);
    cout<< "chaicups:"<< chaicups<<endl;


return 0;

}