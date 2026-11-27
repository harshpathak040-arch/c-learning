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
        // Ask the administrator to enter login details
        cout << "\t\t\t Please login \n";

        // Take email from the user
        cout << "\t\t\t Enter Email \n";
        cin >> email;

        // Take password from the user
        cout << "\t\t\t Password \n";
        cin >> password;

        // Check whether the entered email and password are correct
        if (email == "harsh@email.com" && password == "Harsh@123") // If login details are correct, open administrator panel
        {
        
            administrator();
        }
        else
        {
            // If login details are incorrect
            // display an error message here
        
            cout << "\t\t\t Invalid email or password";

        }
        break;

case 2:
        {
            buyer();  // Call the buyer function when user selects option 2
    
        }

        case 3:
        {
            exit(0);  // Exit the program when user selects option 3
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
    cout << "\n\t\t\t|______1) Add the product______|";// admin can add any product 
    cout << "\n\t\t\t|                              |";
    cout << "\n\t\t\t|______2) Modify the product___|";// can edit old products 
    cout << "\n\t\t\t|                              |";
    cout << "\n\t\t\t|______3) Delete the product___|"; // can delete any products 
    cout << "\n\t\t\t|                              |";
    cout << "\n\t\t\t|______4) Go back to main menu_|"; //back to main menu after operations 
    
    cout <<"\n\t\t\t Please enter your choice";
    cin >> choice;

   switch (choice)
{
    case 1:
        // Call add() function to add a new record
        add();
        break;

    case 2:
        // Call edit() function to edit an existing record
        edit();
        break;

    case 3:
        // Call rem() function to remove a record
        rem();
        break;

    case 4:
        // Return to the main menu
        menu();
        break;

    default:
        // Display an error message for an invalid choice
        cout << "\t\t\t Invalid choice!";
}

// Return to the menu using the goto label 'm'
goto m;

}

void shopping::buyer()
{
    // Label used to return to the buyer menu
    m:

    int choice; // Variable to store the buyer's choice

    
    cout << "\t\t\t  Buyer \n";// Display the buyer menu
    cout << "              \n";


    cout << "\t\t\t 1) Buy product \n";  // Option to buy a product
    cout << "              \n";

    
    cout << "\t\t\t 2) Go back to main menu \n";// Option to return to the main menu
    cout << "              \n";

    // Ask the buyer to enter their choice
    cout << "\t\t\t Please enter your choice";

    // Take the choice from the buyer
    cin >> choice;

    switch (choice)
    {
        case 1:
        // Call receipt() function to generate the purchase receipt
            receipt();
            break;

        case 2:   // Go back to the main menu
            menu();
            break;

        default:
            cout << "\t\t\t\t Invalid choice!";
            break;
    }
    goto m;// return back to main function 

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
    // Create file stream objects for reading and writing data
    int pkey;
     // Variable to store the product code/key
    int token = 0;
     // Used to check whether the product is found
    
    int c;

    float p;// Variable to store the product price

    float d;  // Variable to store the product discount

    string n;  // Variable to store the product name

    cout << "\n\t\t\t Modify the record";
    cout << "\n\t\t\t Product code :";
    cin >> pkey;

    // Open the database file in input/read mode
data.open("database.txt", ios::in);

if (!data)// If the database file cannot be opened, create/open a temporary file in append and output mode
{

    data1.open("database1.txt", ios::app | ios::out);

    // Read product details from the database file
    data >> pcode >> pname >> price >> dis;   // Continue reading until the end of the database file is reached

    while (!data.eof())
    {
            if (pkey == pcode) // Check whether the entered product code matches the product code in the record

            {
                cout << "\n\t\t product of new code:";// Ask for the new product code
                cin >>c;
                cout<<"\n\t\t Name of the product:";     // Store the new product name
                cin >> n;                                          
                                                        // Ask for the new product name

                cout << "\n\t\t Price:";// Ask for the new product price
                cin>> p;     // Store the new price

                cout << "\n\t\t Discount:"; // Ask for the new product discount
                cin >>d;      // Store the new discount
               

                data1 <<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout << "\n\n\t\t Record edited";
                token++;
            }
            else
            {
                data1 <<" "<<pcode<<" "<<pname<<" "<<price<< " "<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if(token==0)
        {
            cout <<"\n\n Record not found sorry!";

        }

    }
}
    void shopping::rem()
    {
        fstream data,data1;
        int pkey;
        int token=0;
        cout <<"\n\n\t Delete product";
        cout<<"\n\n\t product code:";
        cin >>pkey;
        data.open("database.txt",ios::in);
        if (!data)
        {
            cout<<"file doesnt exist";

        }
        else{
            data1.open("database1.txt",ios::app|ios::out);
            data>>pcode>>pname>>price>>dis;
            while(!data.eof())
            {
                if(pcode==pkey)
                {
                    cout<<"\n\n\t product deleted succesfully";
                    
                    token++;
                }
                else
                {
                    data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";

                }
                data>>pcode>>pname>>price>>dis;


            }
            data.close();
            data1.close();
            remove("database.txt");
            rename("database1.txt","database.txt");

            if (token==0)
            {
                cout<<"\n\n Record not found";

            }
            
        }
    }
    void shopping ::list()
    {
        fstream data;
        data.open("database.txt",ios::in);
        cout<<"\n\n|_________________________________________\n";
        cout<<"ProNo\t\tName\t\tPrice\n";
        cout<<"\n\n|_________________________________________\n";
        data>>pcode>>pname>>price>>dis;
        while(!data.eof())
        {
            cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
            data>>pcode>>pname>>price>>dis;

        }

        data.close();


    }
    void shopping::receipt()
    {
        fstream data;

        int arrc[100];
        int arrq[100];
        char choice;

        int c=0;

        float amount=0;
        float dis=0;
        float total=0;

        cout<<"\n\n\t\t\t RECIEPT";
            data.open("database.txt",ios::in);
            if(!data)
            {
                cout<<"\n\n Empty database";

            }
            else{
                data.close();
                list();
                cout<<"\n__________________________________\n";
                cout<<"\n                                  \n";
                cout<<"\n     please place the order       \n";
                cout<<"\n                                  \n";
                cout<<"\n__________________________________\n";

                do
                {
                    m:
                    cout<<"\n\n Enter product code :";
                    cin>>arrc[c];
                    cout<<"\n\nEnter the product quantity:";
                    cin>>arrq[c];
                    for(int i=0; i<c;i++)
                    {
                        if (arrc[c]==arrc[i])
                        {
                            cout<<"\n\n Duplicate  product code.Please try again!";
                            goto m;
                        }
                    }
                    c++ ;
                    cout<<"\n\n Do you want to buy another product? if yes then press y else no";
                    cin>>choice;

                }
                while(choice =='y');

                cout<<"\n\n\t\t\t______________RECEIPT________________\n";
                cout<<"\nProduct No\t prodcut Name\t product quantity\tprice\tAmount\tAmount with discount\n";

                for(int i=0;i<c;i++)
                {
                    data.open("database.txt",ios::in);
                    data>>pcode>>pname>>price>>dis;
                    while(!data.eof())
                    {
                        if(pcode==arrc[i])
                    }
                }
                
            }
    }


    
