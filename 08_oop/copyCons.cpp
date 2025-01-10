#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string* teaName;
    int servings;
    vector<string> ingredients;

    //paramerized contructor
    Chai(string name, int serve, vector<string> ingr){
        teaName = new string(name);
        servings = serve;
        ingredients = ingr;
        cout << "Parameter constructor called" << endl;
    }
    

    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for(string ingridient : ingredients){
            cout << ingridient << " ";
        }
        cout << endl;
    }

};

int main(){
    Chai lemonTea("Lemon Tea", 2, {"Water", "lemon", "honey"});
    lemonTea.displayChaiDetails();


    //copy the object
    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    lemonTea.teaName = "Modified lemon tea";
    
    cout << "Lemon tea" << endl;
    lemonTea.displayChaiDetails();
    cout << "copied  tea" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}