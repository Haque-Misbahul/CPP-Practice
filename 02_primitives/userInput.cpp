#include<iostream>
#include<string>

using namespace std;


int main(){

    string userTea;
    int teaQuantity;


    cout << "What would you like to order in Tea?\n"<< endl;
    getline(cin, userTea);

    //ask for quantity

    cout << "How many cup of " << userTea << " would you like to have? \n";
    cin >> teaQuantity;
    // Clear the input buffer to handle leftover newline
    cin.ignore();

    cout << userTea;
    cout << teaQuantity;

    return 0;
}