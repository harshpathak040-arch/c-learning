#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

// Function declarations (prototypes)

void login ();
void registration ();
void forgot ();

int main (){
    int c;// Variable to store the user's choice

        // Display welcome message and menu...

    cout <<"\t\t\t_____________________________________________\n\n\n";
    cout <<"\t\t\t          Welcome to the login page          \n\n\n";
    cout <<"\t\t\t___________________ MENU ____________________\n\n\n";
    cout <<"                                                   \n\n";
    cout <<"\t| Press 1 to LOGIN               |"<<endl;
    cout <<"\t| Press 2 to REGISTER            |"<<endl;
    cout <<"\t| Press 3 if you forgot PASSWORD |"<<endl;
    cout <<"\t| Press 4 to EXIT                |"<<endl;

          // Take choice from the user
    cout <<"\n\t\t\t Please enter your choice: ";
    cin >> c;
    cout<< endl;

    switch(c)
    {

       case 1:
            login(); // Call login function
            break;

        case 2:
            registration(); // Call registration function
            break;

        case 3:
            forgot(); // Call forgot password function
            break;

        case 4:
            cout << "\t\t\t Thank you ! \n\n";
            break;

        default:
            system("cls"); // Clear the screen if the user enters a wrong choice
            cout << "\t\t\t Please select from given options\n" << endl;
            main(); // Call main again to display the menu
    }
}
//login function
        void login (){
            int count = 0;
            string UserID, Password , ID, Pass;
            system("cls"); // Clear the screen

                // Ask the user to enter  login credentials

            cout<< "\t\t\t Please enter the username and password :"<< endl;
            cout<< "\t\t\t USERNAME: ";
            cin >> UserID;
            cout<< "\t\t\t PASSWORD: ";
            cin >> Password;

             // Open the file containing registered usernames and passwords
            ifstream input("records.txt");
            

            while (input >>ID>>Pass){
               if (ID== UserID && Pass == Password)
                {
                    count = 1;
                    break;
                

                }

         }
         input.close();

         if (count == 1){
            cout << UserID<<"\n Your Login is successful \n Thanks for logging in \n";
            main ();

         }
            else {
                cout << "\n Login error \n Please enter correct details \n";
                main ();


            }
        }
//things used for registration 
        void registration (){

            string rUserID, rPassword, rID, rPass;
            system ("cls");

            cout << "\t\t\t Enter the 'username :"<< endl;
            cin>> rUserID;

            cout << "\t\t\t Enter the password:"<< endl;
            cin >> rPassword;

            ofstream f1("records.txt", ios ::app);
            f1 << rUserID << ' '<< rPassword<< endl;
            f1.close();
            system ("cls");
            
            cout << "\n\t\t\t Registration is successful \n";
            main ();

        }

        void forgot (){
        //when user forgets the password or username......
            int option;
            system ("cls");

            cout << "\t\t\t You forgot the password? No worries \n";
            cout << "Press 1 to serach your id by username"<<endl;
            cout << "Prees 2 to go back to main menu"<< endl;
            cout << "\t\t\t Enter your choice: ";
            cin >> option;
            switch (option){

                case 1:
                {
                int count =0; 
                string sUserID , sID, sPass;
                cout << "\n\t\t\t Enter the username whcih you remembered:";
                cin>> sUserID;

                ifstream f2("records.txt");
                while (f2 >> sID>> sPass)
                {
                if (sID == sUserID)
                {
                    count = 1;
                    }
                }
                    f2.close();
                    if (count == 1)
                    {
                    cout << "\n\n Your account is found! \n";
                    cout << "\n\n Your password is: " << sPass;
                    main ();
                    }
                    else {
                    cout << "\n\t Sorry your account is not found\n";
                    main();
                    }
                    break;
            }

            case 2: // when user choses wrong option to go back to main menu
            {
            
            main();
            
            }
            default :
            cout << "\t\t\t Oops,Wrong choice Please try again \n";
            main();
        }
        defalut :
            cout << "\t\t\t worng choice, please try again "<< endl;
            forgot ();
        }
        
       
        