#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct Employee {

    int id;
    string name;
    double salary;

};

void displayEmployee(const Employee& emp){
    cout<< "ID:"<< emp.id<< ", Name:"<< emp.name<< ",Salary:$"
<<emp.salary<< endl;
}

int main (){

    vector<Employee> employees = {
        {101, "hitesh",100000},
        {101, "harsh",150000},
        {101, "hridesh",160000},
        {101, "shubham",170000},
        {101, "aryan",180000},
        {101, "Annu",190000},

    };

    sort(employees.begin(), employees.end())

    return 0;
}