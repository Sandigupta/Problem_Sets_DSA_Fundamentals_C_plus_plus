#include <bits/stdc++.h>
using namespace std;

int BinarySort(int arr[], int l, int h, int t)
{

    if (t >= arr[0] && t <= arr[h])
    {
        int mid = h - l / 2;
        if (arr[mid] == t)
        {
            return arr[mid];
        }
        else if (t < arr[mid])
        {
           return  BinarySort(arr, l, mid - 1, t);
        }
        else
        {
           return BinarySort(arr, mid + 1, h, t);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 9, 13, 15, 18, 22, 35, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    int t;
    cin >> t;

    int l = 0;
    int h = size - 1;

    int ele = BinarySort(arr, l, h, t);
    cout << ele << endl;
}