#include <bits/stdc++.h>
using namespace std;
void find_lag_smal(int *arr, int *largest, int *smallest) // int arr[]
{

    // int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "\n";

    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        // else if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    for (int i = 0; i < 3; i++){
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    *largest = max;
    *smallest = min;
}

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    int largest = 0;
    int smallest = 0;

    find_lag_smal(arr, &largest, &smallest);
    cout << largest << " " << smallest;
}