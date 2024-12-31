// returnType functionName (parameters){
// function body
// void
//}

#include <iostream>
using namespace std;

void serveChai(int cups);

int main() {
    serveChai(3); // Function call
    return 0;
}
// Function definition before main
void serveChai(int cups) {
    cout << "Serving " << cups << " cups of chai \n";
}


