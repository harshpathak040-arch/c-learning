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

bool compareServings(const Chai & chai1,const Chai& chai2){
    return chai1.servings > chai2.servings;
}
int main (){
    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai",4);

    masalaChai.display();
    gingerChai.display();

    if (compareServings(masalaChai,gingerChai)){
    cout<< "masala chai is having more servings "<<endl;

    }
    else{
        cout<< "masala chai is having less servings"<< endl;
    }
    
}
