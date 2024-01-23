#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){

    for (int i = 0; i < n-1; i++)
    {
        int min_ele = arr[i];
        int idx = -1;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<min_ele){
                min_ele = arr[j];
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);
    }
    
}


int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}