#include<iostream>
#include<fstream>


using namespace std;

class shopping{

    private:
        int pcode;
        float price;
        float dis;
        string pname;

        public:
        void menu();
        void administrator();
        void buyer();
        void add();
        void edit();
        void rem();
        void list();
        void receipt();

};

void shopping :: menu()
{
    m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t____________________________________\n";
    cout << "\t\t\t\t                                    \n";
    cout << "\t\t\t\t        SuperMarket main menu       \n";
    cout << "\t\t\t\t                                    \n";
    cout << "\t\t\t\t____________________________________\n";
    cout << "\t\t\t\t                                    \n";
    cout << "\t\t\t\t| 1) Administrator   |\n";
    cout << "\t\t\t\t|                     |\n";
    cout << "\t\t\t\t| 2) Buyer            |\n";
    cout << "\t\t\t\t|                     |\n";
    cout << "\t\t\t\t| 3) Exit             |\n";
    cout << "\t\t\t\t|                     |\n";
    cout << "\t\t\t\t Please select!";
    cin >> choice;

    switch (choice)
    {
        case 1:
        cout << "\t\t\t Please login \n";
        cout << "\t\t\t Enter Email \n";
        cin >> email;
        cout << "\t\t\t Password \n";
        cin >> password;

        if (email =="harsh@email.com" && password == "Harsh@123")
        {
            administrator ();

        }
        else
        {
            cout << "\t\t\t Invalid email or password";

        }
        break;

        case 2:
        {
            buyer();
    
        }

        case 3:
        {
            exit(0);
        }
        default:
        {
            cout << "Please select from given options";
        }
    
    }
    goto m;
}

// void shopping :: administrator()
// {
//     int choice;
//     cout << "\n\n\n\t\t\t Administrator menu";
//     cout << "\n\t\t\t|______1) Add the product______|";
//     cout << "\n\t\t\t|                              |";
//     cout << "\n\t\t\t|______2) Modify the product___|";
// //     cout << "\n\t\t\t|                              |";
// //     cout << "\n\t\t\t|______3) Delete the product___|"; 
// //     cout << "\n\t\t\t|                              |";
// //     cout << "\n\t\t\t|______4) Go back to main menu_|";
    
// //     cout <<"\n\t\t\t Please enter your choice";
// //     cin >> choice;

// //     switch (choice)
// //     {
// //         case 1;
// //         add ();
// //     }


// // }