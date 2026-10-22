#include<iostream>
#include<vector>

using namespace std;

class Chai{
private:
    string TeaName;
    int servings;
    vector <string> ingredients;

    public:
    Chai(){
        TeaName= "Unknown tea";
        servings=1;
        ingredients={"water","tea","suger","milk"};
    }


    Chai(string name, int serve, vector<string> ingre){
        TeaName = name;
        servings = serve;
        ingredients = ingre;
    }

    //getter

    string getTeaName(){
        return TeaName;
    }


    //setter

    void setTeaName(string name){
        //logic

        TeaName = name;
    }

    //getter for servings

    int getServings(){
        return servings;
    }
        //setter for servings

        void setServings(int serve){
            servings= serve;
        }

        //getter for ingredients

        vector<string> getingredients(){
        return ingredients;
        }
    // setter for ingre

    void setingredients(vector<string>ingre){
        ingredients= ingre;
    }
    
};

int main (){}
