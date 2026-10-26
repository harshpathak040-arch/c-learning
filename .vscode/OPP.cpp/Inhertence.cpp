#include<iostream>
#include<string>
#include<vector>

using namespace std;

//base class or parent class 

class Tea{
    protected:

        string teaName;
        int servings;

        public:

        Tea(string name , int serve): teaName(name), servings(serve){
            cout << "Tea constructor called"<<teaName<< endl;
        }
};