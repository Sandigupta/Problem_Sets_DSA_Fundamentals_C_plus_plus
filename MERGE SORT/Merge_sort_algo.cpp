#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int n){
    int a1 = (mid - l) + 1;
    int a2 = n - mid;

    int a[a1];
    int b[a2];

    for (int i = 0; i < a1; i++)
    {
            a[i] = arr[l+i];
    }
    for (int j = 0; j <a2; j++)
    {
            b[j] = arr[mid+1+j];
    }
    int i = 0, j = 0,k=l;
    while (i<a1 && j<a2)
    {
        if(a[i]<b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }
    while (i<a1)
    {
        arr[k++] = a[i++];
    }
    while (j<a2)
    {
        arr[k++] = b[j++];
    }   
}

void mergeSort(int arr[], int l,int n){
    if(l>=n)
        return;

    int mid = (l + n) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, n);
    merge(arr, l, mid, n);
}

    int main()
{
    int arr[] = {10, 28, 24, 6, 34, 18, 38, 44};

    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}