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
    
}