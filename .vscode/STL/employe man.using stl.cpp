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
        {102, "harsh",150000},
        {103, "hridesh",160000},
        {104, "shubham",170000},
        {105, "aryan",180000},
        {106, "Annu",190000},

    };

    sort(employees.begin(), employees.end(),[](const
         Employee& e1, const Employee& e2 ){
        return e1.salary> e2.salary;

    });

    cout << "Employees stored by salary -> Highest to lowest \n";

    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(
    employees.begin (),
     employees.end() ,
      back_inserter(highEarners),
      [](const Employee& e){
        return e.salary > 50000;
    
    });

    cout << "Employees who are high earners\n";
    for_each(employees.begin(), employees.end(), displayEmployee);
    
    accumulate (employees.begin(), employees.end(),0.0,
        [](double sum,const Employee& e){
            return sum + e.salary;

        });

        double avaerageSalary = totalSalary/ employees.size();
        max_element(employees.begin(),employees.end(),
        [](const Employee& e2){}

    return 0;
}