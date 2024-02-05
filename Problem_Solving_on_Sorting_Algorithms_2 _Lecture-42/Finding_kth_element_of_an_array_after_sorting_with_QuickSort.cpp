#include <bits/stdc++.h>
using namespace std;

int partetion(int arr[], int l, int n)
{
    int pivot = arr[n];
    int i = l - 1;
    for (int j = l; j < n; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[n]);
    return i + 1;
}

int QuickSort(int arr[], int l, int n, int k)
{

    if (k > 0 && k <= n - l + 1)
    {
        int pi = partetion(arr, l, n);
        if (pi - l == k - 1)
        {
            return arr[pi];
        }
        else if (k - 1 < pi - l)
        {
            return QuickSort(arr, l, pi - 1, k);
        }
        else
        {
            return QuickSort(arr, pi + 1, n, k - (pi - l + 1));
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3, 5, 2, 1, 4, 7, 8, 6};
    int k;
    cin >> k;

    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int kth_ele = QuickSort(arr, l, n - 1, k);

    cout << kth_ele << endl;
}