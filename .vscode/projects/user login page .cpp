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
            main ();
            
   
        }

}

        void Login (){
            int count;
            string UserID, Password , ID, Pass;
            system("cls");
            cout<< "\t\t\t Please enter the username and password :"<< endl;
            cout<< "\t\t\t USERNAME: ";
            cin >> UserID;
            cout<< "\t\t\t PASSWORD: ";
            cin >> Password;

            ifstream input("records.text");

            while (input >>ID>>Pass){
               if (ID== UserID && Pass == Password)
                {
                    count = 1;
                    system("cls");

                }

         }
         input.close();

         if (count == 1){
            cout << UserID<<"\n Your Login is successful \n Thanks for logging in \n";
            main ();

         }
            else {
                cout << "n Login error \n Please enter correct details \n";
                main ();


            }
        }

        void registration (){

            string rUserID, rPassword, rID, rPass;
            system ("cls");
            cout << "\t\t\t Enter the 'username :"<< endl;
            cin>> rUserID;
            cout << "\t\t\t Enter the password:"<< endl;
            cin >> rPassword;

            ofstream f1("records.txt", ios ::app);
            f1 << rUserID<< ' '<< rPassword<< endl;
            system ("cls");
            cout << "\n\t\t\t Registration is successful "\n";
            
        }
        
       
        