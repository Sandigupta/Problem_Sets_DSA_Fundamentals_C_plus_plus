#include<iostream>
using namespace std;

// int main(){
//     int arr1[]={8,6,4,2,3,5,0,1};
//     int arr2[]={0,1,2,3,4,5,6,7,8};
//     for (int i = 0; i < 9; i++)
//     {
//       for (int j = 0; j < 9; j++)
//       {
//         if(arr2[j])
//          break;
//          else
//       }
      
//     }
    
// }


int main(){
    int i,n;
    cout<<"Enter the range of intigers you want"<<endl;
    cin>>i>>n;

    int sum1=0;
    for (int j = i; j <=n; j++)
    {
        sum1+=j;
    }
    
    int sum2=0;
    int arr[]={8,6,4,2,3,5,0,1};
    for (int k = 0; k< sizeof(arr)/sizeof(arr[0]); k++)
    {
        sum2+=arr[k];
    }
    cout<<"Your intiger is"<<sum1-sum2<<endl;
}