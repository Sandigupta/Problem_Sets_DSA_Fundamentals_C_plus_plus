#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
       int ptr1=0;
       int ptr2=k;
       int a=0;
       int count=0;
       while(ptr2<n){
          for(int i=ptr1;i<ptr2;i++){
            a=a|arr[ptr1];
          } 
          if(a%2!=0){
              count++;
          }
          ptr1++;
          ptr2++;
       }
       
       cout<<count<<endl;
    }
   
}