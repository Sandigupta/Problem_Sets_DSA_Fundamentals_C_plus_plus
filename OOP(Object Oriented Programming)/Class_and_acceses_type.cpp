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
};

int main(){
    Employe employe1;
    employe1.name = "Sandeep";
    employe1.company = "E-Cell";
    employe1.age = 21;
    employe1.introduceYourself();

    Employe employe2;
    employe2.name = "John";
    employe2.company = "Amazon";
    employe2.age = 35;
    employe2.introduceYourself();
}