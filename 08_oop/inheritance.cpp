#include<iostream>
#include<string>
#include<vector>


using namespace std;

//base/parent class

class Tea{
    protected:
        string teaName;
        int servings;

    public:
        Tea(string name, int serve): teaName(name), servings(serve){
            cout << "Tea constructor called" << teaName << endl;
        }

        virtual void brew() const {
            cout << "Brewing " << teaName << "With generic method" << endl;
        }
        virtual void serve() const {
            cout << "Serving " << servings << "cup of tea With generic method" << endl;
        }
        virtual ~Tea(){
            cout << "Tea destructor called for " << teaName << endl;
        }
};


int main(){

    return 0;
}