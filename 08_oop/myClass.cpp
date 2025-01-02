#include<iostream>
#include<vector>

using namespace std;


class Chai{
    //data members/(attributes)
    public:
        string teaName;   //name of the tea
        int servings;  // number of servings
        vector<string> ingredients;  // list of ingridients

        // memeber function
        void displayChaiDetails (){
            cout << "Tea Name: "  << teaName << endl;
            cout << "Servibgs: " << servings << endl;
            cout << "Ingerdients: " ;
            for (string ingredient : ingredients)
            {
                cout << ingredient << " ";
            }
            cout << endl;
            
        }

};


int main (){

Chai chaiOne;

chaiOne.teaName = "lemon tea";
chaiOne.servings = 2;
chaiOne.ingredients = {"water", "lemon", "honey", "tea"};

chaiOne.displayChaiDetails();

Chai chaiTwo;

chaiTwo.teaName = "Masala tea";
chaiTwo.servings = 4;
chaiTwo.ingredients = {"water", "Masala", "honey", "tea"};

chaiTwo.displayChaiDetails();

return 0;
}