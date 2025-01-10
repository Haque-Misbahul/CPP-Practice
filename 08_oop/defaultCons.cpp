#include<iostream>
#include<vector>

using namespace std;

class Chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
    //default constructor
    Chai(){
        cout<< "Constructor called" << endl;
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

    return 0;
}