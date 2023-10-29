#include<iostream>
using namespace std;

void sortedArray(int a1[],int a2[],int a3[],int m,int n){
    int ptr1 = 0;
    int ptr2 = 0;
    
    
    int i = 0;
    while (ptr1<m && ptr2<n)
    {
        if(a1[ptr1]<=a2[ptr2]){
            a3[i]=a1[ptr1];
            ptr1++;
            i++;
        }
        else if(a1[ptr1]>=a2[ptr2]){
            a3[i] = a2[ptr2];
            ptr2++;
            i++;
        }
        
    }
    while (ptr2<n)
    {
          a3[i] = a2[ptr2];
          ptr2++;
          i++;
    }
     while (ptr1<m)
    {
          a3[i] = a1[ptr1];
          ptr1++;
          i++;
    }

    
}



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
    int l = m + n;
    int arr3[l];
     sortedArray(arr1,arr2,arr3,m,n);
   
    for (int k = 0; k < l; k++)
    {
        cout<<arr3[k]<<" ";
    }
    
}