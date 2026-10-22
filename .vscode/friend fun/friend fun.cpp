//friend function -  a friend clss can access private
// and protected members of clss when 
//it is declared as friend.
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Chai{
    private:
    string teaName;
    int servings;

    public:
    Chai(string name , int serve):teaName(name),servings(serve){}
    
    friend bool compareServings(const Chai& chai1, const Chai& chai2);

    void display() const{
        cout<<"teaname:"<<teaName<<endl;

    }
};
int main (){
    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai",4);

    masalaChai.display();
    gingerChai.display();

    if (){
    
    }
    else{
        
    }
    
}
