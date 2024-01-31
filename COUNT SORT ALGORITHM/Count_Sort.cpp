#include <bits/stdc++.h>
using namespace std;

void CountSort(int arr[], int n, int temp[])
{
    // int l = sizeof(temp) / sizeof(temp[0]);
    int i = n - 1;
    int idxarr = -1;
    for (; i >= 0; i--)
    {
        int idx = arr[i];
        idxarr = temp[idx] - 1;
    }
    arr[idxarr] = arr[i];
}

void count(int arr[], int n)
{

    // frequency of the elements
    // vector<int> temp;
    int temp[n + 1];
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                cnt++;
            }
        }
        // temp.push_back(cnt);
        temp[i] = cnt;
    }

    // commulative frequency

    for (int i = 1; i < n; i++)
    {
        temp[i] = temp[i - 1] + temp[i];
    }

    CountSort(arr, n, temp);
}

int main()
{
    int arr[] = {5, 2, 3, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    count(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}