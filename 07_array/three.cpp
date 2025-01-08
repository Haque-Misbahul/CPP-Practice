#include<iostream>

using namespace std;


int totalChaiServed(int Chai[], int size){
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + Chai[i];
    }
    cout << "Total calculated inside function: " << total << endl;
    return total;
    
}

int main (){

    int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75};

    cout << "Starting totalChaiServed function..." << endl;

    int total = totalChaiServed(chaiServed, 7);

    cout << "total chai served :" << total <<endl;


    return 0;
}