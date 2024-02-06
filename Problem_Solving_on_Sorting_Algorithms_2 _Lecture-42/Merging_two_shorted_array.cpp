#include <bits/stdc++.h>
using namespace std;

void Merging_arr(int arr1[], int arr2[], int arr[], int n1, int n2)
{
    int ptr1 = 0;
    int ptr2 = 0;
    int k = 0;
    while (ptr1 < n1 && ptr2 < n2)
    {
        if (arr1[ptr1] < arr2[ptr2])
        {
            arr[k] = arr1[ptr1];
            ptr1++;
            k++;
        }
        else
        {
            arr[k] = arr2[ptr2];
            ptr2++;
            k++;
        }
    }
    while (ptr1 < n1)
    {
        arr[k] = arr1[ptr1];
        ptr1++;
        k++;
    }
    while (ptr2 < n2)
    {
        arr[k] = arr2[ptr2];
        ptr2++;
        k++;
    }
}

int main()
{
    int arr1[] = {5, 8, 10};
    int arr2[] = {2, 7, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr[n1 + n2];

    int maxSize = max(n1, n2);

    Merging_arr(arr1, arr2, arr, n1, n2);

    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << arr[i] << " ";
    }
}