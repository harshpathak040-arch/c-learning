//friend function -  a friend clss can access private
// and protected members of clss when 
//it is declared as friend.
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Chai{
    private:
    string teaName;
    int servings;

    public:
    Chai(string name , int serve):teaName(name),servings(serve){}


    void display() const{
        cout<<"teaname:"<<teaName<<endl;

    }
};

