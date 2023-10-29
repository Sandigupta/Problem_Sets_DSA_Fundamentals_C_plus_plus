#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int ptr1 = 0;
    int ptr2 = 0;
    int l = m + n;
    int arr3[l];
    int i = 0;
    while (ptr1<m && ptr2<n)
    {
        if(arr1[ptr1]<=arr2[ptr2]){
            arr3[i]=arr1[ptr1];
            ptr1++;
            i++;
        }
        else if(arr1[ptr1]>=arr2[ptr2]){
            arr3[i] = arr2[ptr2];
            ptr2++;
            i++;
        }
        
    }
    // if(ptr2<n){
    //     for (int j = ptr2; j < n; j++)
    //     {
    //         arr3[i] = arr1[j];
    //         i++;
    //     } 
    // }
    // else
    // {
    //     for (int j = ptr1; j < m; j++)
    //     {
    //         arr3[i] = arr2[j];
    //         i++;
    //     } 
    // }
    
    while (ptr2<n)
    {
          arr3[i] = arr2[ptr2];
          ptr2++;
          i++;
    }
     while (ptr1<m)
    {
          arr3[i] = arr1[ptr1];
          ptr1++;
          i++;
    }
    
    for (int k = 0; k < l; k++)
    {
        cout<<arr3[k]<<" ";
    }
    
}