#include<iostream>
#include<vector>

using namespace std;

class Chai {

    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "unknown tea";
            servings = 1;
            ingredients = {"water", "tea leaves"};
        
        }
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings =  serve;
            ingredients = ingr;
        }

        //getter
        string getTeaName(){
            return teaName;
        }
        //setter
        void setTeaName(string name){
            teaName = name;
        }
         //getter for serving
        int getServings(){
            return servings;
        }

        //setter for servings
        void setServings(int serve){
            servings = serve;
        }

        //getter for ingre
        vector<string> getIngredients(){
            return ingredients;
        }

        //settter for ingre
        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        }

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
    Chai chai;

    chai.setTeaName("ginger tea");
   return 0;
}