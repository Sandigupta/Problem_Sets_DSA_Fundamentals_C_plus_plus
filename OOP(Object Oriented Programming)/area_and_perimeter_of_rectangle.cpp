#include<bits/stdc++.h>
using namespace std;

class AreaOfRect{
        int l;
        int b;

    int Calc_Area(){
        return l * b;
    }

    int Calc_Perimetr(){
        return 2 * l + 2 * b;
    }
};

int main(){
    AreaOfRect Rect;
    Rect.l = 10;
    Rect.b = 20;

    cout << Rect.l <<" "<<Rect.b << endl;
    cout << Rect.Calc_Area() << endl;
    cout << Rect.Calc_Perimetr() << endl;
}
