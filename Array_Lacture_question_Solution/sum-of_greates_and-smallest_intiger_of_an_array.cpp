#include<iostream>
using namespace std;

int main(){
 int arr[]={1,2,3,4,5};
 int min=arr[0];
 int max=arr[0];

 for(int i = 0; i < 5; i++)
 {
    if(arr[i]>max)
    max=arr[i];
    else if (arr[i]<min)
    {
        min=arr[i];
    }
    
 }
 cout<<max<<endl<<min<<endl;;
 cout<<"Sum of greatest and smallest intiger is:"<<max+min<<endl;
 
}