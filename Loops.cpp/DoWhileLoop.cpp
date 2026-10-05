#include<iostream>
#include<string>

using namespace std;

int main() {
    string Response;

    do {
        cout << "Do u want more tea?(Yes/No)" << endl;
        getline(cin, Response);
    } while (Response != "No" && Response = "no");

    return 0;
}


