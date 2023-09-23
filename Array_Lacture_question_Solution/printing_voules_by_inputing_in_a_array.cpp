#include<iostream>
using namespace std;

int main(){
    char vowel[5];

    /*Method first.........................*/    
    // for (int  i = 0; i < 5; i++)
    // {
    //     cin>>vowel[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<vowel[i]<<" ";
    // }
    

    for (char &element:vowel)
    {  
        cin>>element;
        printf("\n");
       cout<<element<<" ";
    }
    
}