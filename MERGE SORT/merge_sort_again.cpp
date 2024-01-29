#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h){
    int temp[h + 1];

    int a1 = l;
    int a2 = mid + 1;
    int k = 0;
    while (a1<=mid && a2<=h)
    {
        if(arr[a1]>arr[a2]){
            temp[k++] = arr[a2++];
        }else{
            temp[k++] = arr[a1++];
        }
    }
    while (a1<=mid)
    {
        temp[k++] = arr[a1++];
    }
    while (a2<=h)
    {
        temp[k++] = arr[a2++];
    }
    for (int i = l; i <=h; i++)
    {
        arr[i] = temp[i - l];
    }
    
}



void mergesort(int arr[],int l,int h){
    if(l>=h){
        return;
    }
    int mid = (l + h) / 2;

    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, h);
    merge(arr, l, mid, h);
}


int main(){
    int arr[] = {11, 9, 10, 5, 7, 10, 8, 14};

    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}