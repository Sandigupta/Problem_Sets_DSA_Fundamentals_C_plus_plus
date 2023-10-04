#include<iostream>
#include<math.h>
using namespace std;


int square_root(int);
int main(){
    for (int i = 1; i <=5; i++)
    {
        cout<<square_root(i)<<endl;
    } 
}
int square_root(int x){
    return pow(x,2);
}
