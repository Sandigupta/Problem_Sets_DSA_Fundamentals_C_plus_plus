#include<iostream>
using namespace std;

int add(int a,int b=1,int c=2)
{
    return(a+b+c);
}
int main(){
    cout<<add(2)<<endl;
    cout<<add(2,2)<<endl;
    cout<<add(2,2,2)<<endl;
    return 0;
}