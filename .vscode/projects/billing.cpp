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

void shopping :: administrator()
{
    m:
    int choice;
    cout << "\n\n\n\t\t\t Administrator menu";
    cout << "\n\t\t\t|______1) Add the product______|";
    cout << "\n\t\t\t|                              |";
    cout << "\n\t\t\t|______2) Modify the product___|";
    cout << "\n\t\t\t|                              |";
    cout << "\n\t\t\t|______3) Delete the product___|"; 
    cout << "\n\t\t\t|                              |";
    cout << "\n\t\t\t|______4) Go back to main menu_|";
    
    cout <<"\n\t\t\t Please enter your choice";
    cin >> choice;

    switch (choice)
    {
        case 1:
        add ();
        break;

        case 2:
        edit ();
        break;

        case 3:
        rem ();
        break;

        case 4:
        menu();
        break;


        default:
        cout << "\t\t\t Invalid choice!";

    }
    goto m;


}

void shopping :: buyer()
{
    m:
    int choice;
    cout << "\t\t\t  Buyer \n";
    cout << "              \n";
    cout << "\t\t\t 1) Buy product \n";
    cout << "              \n";
    cout << "\t\t\t 2) Go back to main menu \n";
    cout << "              \n";
    cout << "\t\t\t Please enter your choice";

    cin >> choice;

    switch (choice)
    {
        case 1:
            receipt();
            break;

        case 2:
            menu();
            break;

        default:
            cout << "\t\t\t\t Invalid choice!";
            break;
    }
    goto m;

}

void shopping :: add()
{
    m:
    fstream data;
    int c;
    int token =0;
    float p;
    float d;
    string n;

    cout <<"\n\t\t\t Add new product";
    cout << "\n\t\t\t Product code of the product";
    cin >> pcode;
    cout << "\n\t\t\t Name of the product";
    cin >> pname;
    cout << "\n\n\t Price of the product";
    cin >> price;
    cout << "\n\n\t Discount on product";
    cin >>dis;

    data .open("database.txt", ios::in);
    if (!data)
    {
        data.open("database.txt", ios::app| ios::out);
        data << " "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
else 
{
    data >> c >> n >> p >> d;

    while(!data.eof()) // initializing the data from the file to check if the product code already exists
    {
        if (c == pcode)
        {
            token++;
        }
        data>>c>>n>>p>>d;
    }
    data.close();

}

if (token== 1)
goto m;

else{
    data.open("database.txt", ios::app| ios::out);
        data << " "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }

    cout<<"\n\n\t\t Record inserted !";
    goto m;

}
void shopping :: edit()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << "\n\t\t\t Modify the record";
    cout << "\n\t\t\t Product code :";
}