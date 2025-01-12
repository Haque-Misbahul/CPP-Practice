#include<iostream>
#include<vector>


using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        //main constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;

            cout << "Main counstructor called" << endl;
        }

        //deligating constructor

        Chai(string name): Chai(name, 1,{"water", "tea leaves"}){}

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

    Chai quickChai("Quick Chai");
    quickChai.displayChaiDetails();


    return 0;
}