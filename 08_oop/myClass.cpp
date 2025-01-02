#include<iostream>
#include<vector>

using namespace std;


class Chai{
//data members/(attributes)

string teaName;   //name of the tea
int servings;  // number of servings
vector<string> ingredients;  // list of ingridients


// memeber function

void displayChaiDetails (){
    cout << "Tea Name: "  << teaName << endl;
    cout << "Servubgs: " << servings << endl;
    cout << "Ingerdients: " ;
    for (string ingredient : ingredients)
    {
        cout << ingredient << " ";
    }
    cout << endl;
    
}

};


int main (){
return 0;
}