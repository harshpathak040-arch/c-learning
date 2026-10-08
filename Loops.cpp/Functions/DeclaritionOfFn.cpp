#include <iostream>
using namespace std;

// declaration of function
void serveTea(int cups);

// we can name different functions with the same name but different parameters, this is called function overloading

void serveTea(string teaType){
    cout<< "serving"<< teaType<<endl;

}


//we can comment the functions calling that we dont want to execute

int main() {
    serveTea(3);
    return 0;
}

// definition of function
void serveTea(int cups){
    cout << "Serving " << cups << " cups of tea." << endl;

}

    

    
    

