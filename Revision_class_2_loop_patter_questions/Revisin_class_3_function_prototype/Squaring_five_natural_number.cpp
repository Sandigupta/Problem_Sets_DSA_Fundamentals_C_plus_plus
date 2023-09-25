#include<iostream>
#include<math.h>
using namespace std;

void findSqure(int query){
while (query--)
    {
         int a;
        cout<<"Enter the natural number:";
        cin>>a;
        cout<<"Square of natural number is:"<<a*a<<endl;
    }
}

int main(){
    int query;
    cout<<"Enter your number of querry:";
    cin>>query;
    findSqure(query);
}