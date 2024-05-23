#include<bits/stdc++.h>
using namespace std;

const double PI = 3.14159;
class circle{
    public:
        double radius;

    double areaCal(){
        return PI * radius * radius;
    }    

};

int main(){
    circle area;
    area.radius = 3.4;

   double Area= area.areaCal();
   cout << Area << endl;
}