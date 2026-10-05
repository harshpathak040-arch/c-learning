#include<iostream>
#include<string>
using namespace std;

int main() {
    string response;

    while(true){

        cout<< "do you want more tea(type'stop'to exit)?"<<endl;
        getline(cin, response);

        if (response == "stop"){
            //now we want to break the loop so we will use the break keyword
            break;
        }

    }

    return 0;
}


