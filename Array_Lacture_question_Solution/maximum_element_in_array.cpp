#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//        if(arr[i]>max)
//        max=arr[i];
//     }
//     cout<<max<<endl;
    
    
// }


int main(){
    int arr[5];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"The max elements is"<<max<<endl;
}