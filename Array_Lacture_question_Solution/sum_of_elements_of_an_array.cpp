// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int sum=0;
//     for (int i = 0; i<n; i++)
//     {
//         sum=sum+arr[i];
//     }
//     cout<<"sum="<<sum<<endl;
    
// }

//method second.................................................
#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;
    for (int i = 0; i<size; i++)
    {
        sum+=arr[i];
    }
    cout<<"sum="<<sum<<endl;
    
}