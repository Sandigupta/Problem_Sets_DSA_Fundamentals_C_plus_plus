#include<bits/stdc++.h>
using namespace std;

class Triangle{
    private:
        int side1;
        int side2;
        int side3;
    
    public:
    Triangle(int x, int y,int z){
        side1 = x;
        side2 = y;
        side3 = z;
    }  
    
    void Triangle_Type(){
        if(side1==side2 && side2==side3){
            cout<<"Equeletral"<<endl;
        }else if((side1==side2 && side1!=side3) || (side2==side3 && side2!=side1)|| (side1==side3 && side1!=side2)){
            cout << "Isosceles" << endl;
        }else{
            cout << "Scalene" << endl;
        }
    }  
};

int main(){
    Triangle typeOff=Triangle(2, 3, 4);
    typeOff.Triangle_Type();
    typeOff = Triangle(3, 3, 3);
    typeOff.Triangle_Type();
}