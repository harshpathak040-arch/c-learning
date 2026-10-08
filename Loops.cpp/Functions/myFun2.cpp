#include <iostream>
using namespace std;    

// pass by value - when we change the value of the copy or the og value will not be changed casue we have our own copy of that .
//pass by reference - when we change the value of the copy or the og value will be changed cause we are using the same file of the og value.


void pourchai(int cups){
    cups = cups +1;
    cout <<" poured cups :"<< cups << endl;

}
int main ()



return 0;

}