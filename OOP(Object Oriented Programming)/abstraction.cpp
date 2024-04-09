/**.............Enables us to dispaly only essential information while hiding implementation details.....**/

/**.............Problem-Geting employe get promotion or not..........**/
#include <bits/stdc++.h>
using namespace std;

class AbstractEmploye{//This is abstact class that provide that we are using to hind this complex code to find where the employe will get promoted or not.Just by giving a function "AskForPromotion".
    // public:
    virtual void AskForPromotion() = 0;
};

class Employe:AbstractEmploye{
private:         // this is encapsulation--->encapsulation means that you only dispaly the on demand.
    string Name; // that why we are priave the variables of class .
    string company;
    int age;

public:
    void setName(string name) // And by using these function we are accsing the private variables of class.
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string Company)
    {
        company = Company;
    }
    string getCompany()
    {
        return company;
    }

    // void setAge(int Age)
    // {
    //     age = Age;
    // }
    /**.............So we can put some condition here..............**/
    void setAge(int Age)
    {
        if (Age > 18)
            age = Age;
    }
    int getAge()
    {
        return age;
    }

    void introduceYourself() // this function is is use to dispaly the assign data to the class variable.
    {
        cout << "Name-" << Name << endl;
        cout << "Company-" << company << endl;
        cout << "Age-" << age << endl;
    }
    Employe(string name, string Company, int Age)
    { // this is wat called constructor whis use to assigne the or initialise the data to the variables.
        Name = name;
        company = Company;
        age = Age;
    }

    void AskForPromotion()
    {
        if (age > 30)
            cout << Name << " got promoted! " << endl;
        else
            cout << Name << ", sorry NO promotion for you!" << endl;
    }
};

int main()
{
    Employe employe1 = Employe("Saldina", "YT-CodeBeauty", 25);

    Employe employe2 = Employe("Sandeep", "E-Cell", 21);

    Employe employe3 = Employe("Joen", "Amazon", 27);

    employe1.AskForPromotion();
    employe2.AskForPromotion();

    // employe1.setAge(15);
    // cout << employe1.getName()<< " is " << employe1.getAge() << " year old " << endl;
}