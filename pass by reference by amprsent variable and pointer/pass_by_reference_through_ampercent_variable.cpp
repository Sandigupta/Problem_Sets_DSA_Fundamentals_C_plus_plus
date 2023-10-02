// #include<iostream>
// using namespace std;

// void changevalue(int &z,int &y) {
//     z=100;
//     y=50;
// }
// int main(){
//    int a=5;
//    int b=10;
//    changevalue(a,b);
//    cout<<a<<" "<<b<<endl;

//    return 0;
// }


#include<iostream>
using namespace std;

void changevalue(int &z ,int &y ) ;
int main(){
   int a=5;
   int b=10;
   changevalue(a,b);
   cout<<a<<" "<<b<<endl;

   return 0;
}
void changevalue(int &z,int &y) {
    z=100;
    y=50;
}