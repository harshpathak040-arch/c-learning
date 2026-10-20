#include<iostream>
using namespace std;

int main()
{
    float Teaprice = 99.999;
    int roundedTeaprice = (int)Teaprice; // Explicit type casting

int teaQuantity = 10;

int totalprice = Teaprice * teaQuantity;



    cout << "Rounded tea price: " << roundedTeaprice << endl;
    cout << "Total price: " << totalprice << endl;
    return 0;
}