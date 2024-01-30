#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int  pivot = arr[h];
    int i = l-1;
    for (int j = l; j <  h; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i+1;
}
void QuickSort(int arr[],int l,int h){
    if(l>=h){
        return;
    }
    int pi = partition(arr, l, h);
    QuickSort(arr, l, pi - 1);
    QuickSort(arr, pi + 1, h);
}


int main(){
    int arr[] = {10, 3, 7, 9, 1, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
}