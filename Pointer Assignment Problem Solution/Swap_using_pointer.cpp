#include<iostream>
using namespace std;
void swapfun(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    cin >> a >> b;
    
    cout<<"a="<<a<<" "<<"b="<<b<<"\n";
    swapfun(&a, &b);
    cout<<"a="<<a<<" "<<"b="<<b<<"\n";
}