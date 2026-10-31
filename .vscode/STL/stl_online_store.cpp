#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_set>
#include<unordered_map>

using namespace std;

struct Product{
    int productID;
    string name;
    string category;


};

struct Order {

    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
    


};

int main (){

    vector<Product> products = {
        {101, "Laptop","Electronics"},
        {102, "Phoen", "Electronics"},
        {103, "Blender","Kitchen"},
        {104, "Desk Lamp", "Home"}


    };


    deque<string> recentCustomers ={"C001","C002","C003"};


    recentCustomers.push_back("C004");
    
    recentCustomers.push_back("C005");



    list<Order> orderHistory;
    orderHistory.push_back(Order{1, 101, 1, "C001", time(0)});
    orderHistory.push_back(Order{1, 101, 1, "C002", time(0)});
    orderHistory.push_back(Order{1, 101, 1, "C003", time(0)});

    set<string> categories ;

    for(const auto prodecut:products){

        categories.insert (products.category);
    }

    map <int , int >productStock = {
        {
            {101, 10},
            {102, 20},
            {103, 30},
            {104, 15},
            {105 ,10},
        }
    };

    multimap <string, Order> customerOrders;
    for (const auto &order :orderHistory){
        customerOrders.insert({order. customerID, order});
        
    }


    return 0;
}
