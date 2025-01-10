#include<iostream>
#include<vector>
#include <string>
#include <initializer_list>

using namespace std;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
    //default constructor
    Chai(){
        teaName = "Unknown Tea";
        servings = 1;
        ingredients = {"Water", "Tea Leaves"};
        cout << "Constructor called"  << endl;
    }

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

int main(){

    Chai defaultChai;

    defaultChai.displayChaiDetails();

    return 0;
}