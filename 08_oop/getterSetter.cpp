#include<iostream>
#include<vector>

using namespace std;

class Chai {

    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "unknown tea";
            servings = 1;
            ingredients = {"water", "tea leaves"};
        
        }
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings =  serve;
            ingredients = ingr;
        }

        //getter
        string getTeaname(){
            return teaName;
        }
};

int main (){
    Chai chai;
   
}