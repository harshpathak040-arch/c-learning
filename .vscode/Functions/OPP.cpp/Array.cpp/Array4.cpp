#include<iostream>

using namespace std;
//a pointer is a variable that stores the memory address of another variable.
int* prepareChaiOrder(int cups){

    //dyanamic memory allocation - new allocates memory while the program is running.
   int* orders= new int [cups];
   for(int i=0; i<cups;i++){
    orders[i]=(i+1)*10;
   }
   return orders;

}
int main (){
int cups = 5;
int*chaiOrder= prepareChaiOrder(cups);

for (int i = 0;i<cups;i++){
    cout<<"cups"<<i+1<<"has"<<chaiOrder[i]<<"ml\n";
}

delete[]chaiOrder;

    return 0;
}