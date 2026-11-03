#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

// declarations 

void login ();
void registration ();
void forgot ();

int main (){
    int c; // choice variable
    cout <<"\t\t\t_____________________________________________\n\n\n";
    cout <<"\t\t\t          Welcome to the login page          \n\n\n";
    cout <<"\t\t\t___________________ MENU ____________________\n\n\n";
    cout <<"                                                   \n\n";
    cout <<"\t| Press 1 to LOGIN               |"<<endl;
    cout <<"\t| Press 2 to REGISTER            |"<<endl;
    cout <<"\t| Press 3 if you forgot PASSWORD |"<<endl;
    cout <<"\t| Press 4 to EXIT                |"<<endl;

    cout <<"\n\t\t\t Please enter your choice: ";
    cin >> c;
    cout<< endl;

    switch(c)
    {

        case 1:
            login ();
            break;
        case 2:
            registration ();
            break;
            
        case 3:
            forgot ();
            break;


         case 4:
            cout << "\t\t\t Thank you ! \n\n";
            break;   

            default:
            system ("cls"); //it will clear the screen if user enter worng number
            cout<< "\t\t\t Please select from given options\n"<< endl;
   
   
        }

}