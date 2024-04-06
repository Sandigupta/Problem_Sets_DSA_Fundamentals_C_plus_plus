#include<bits/stdc++.h>
using namespace std;

class Employe{
    public:
        string name;
        string company;
        int age;
    
    void introduceYourself(){
        cout << "Name-" << name << endl;
        cout << "Company-" << company << endl;
        cout << "Age-" << age << endl;
    }

    Employe(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }
};

int main(){
    /** THIS IS CALL CALSS METHOD TO ASSSINE THE VALUE OF VARIABLES**/
    // Employe employe1;
    // employe1.name = "Sandeep";
    // employe1.company = "E-Cell";
    // employe1.age = 21;
    // employe1.introduceYourself();

    // Employe employe2;
    // employe2.name = "John";
    // employe2.company = "Amazon";
    // employe2.age = 35;
    // employe2.introduceYourself();

    Employe employe1 = Employe("Sandeep","E - Cell", 21);
    employe1.introduceYourself();

    Employe employe2 = Employe("John", "Amazon", 35);
    employe2.introduceYourself();
}

/**Constructor of three types  **/
//--> 1.Default--->Default constructor are always present with the calss.
//--> 2.Parameterised--->Class_Name(parameters)--Arguments are passe through diffine diffine object-->it diffine inside the class and it use to assigne multiple data to same class variables for different variable ouput.
//--> 3.Copy---->This use to copy the data from one object to another object.,