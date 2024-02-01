// #include <bits/stdc++.h>
// using namespace std;

// void CountSort(int arr[], int n, int pos)
// {
//     vector<int> freq(10,0);
//     // calculate the frequency of elements at that possition.
//     for (int i = 0; i < 10; i++)
//     {
//         freq[(arr[i] / pos) % 10]++;
//     }
//     // commulative frequency of freq

//     for (int i = 1; i < 10; i++)
//     {
//         freq[i] += freq[i - 1];
//     }
//     // sorting the elements at that postion
//     int ans[n];
//     for (int i = n - 1; i >= 0; i--)
//     {
//         ans[--freq[(arr[i] / pos) % 10]] = arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = ans[i];
//     }

//     return;
// }

// int main()
// {
//     int arr[] = {170, 45, 75, 90, 802, 2};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int max_ele = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         max_ele = max(arr[i], max_ele);
//     }

//     for (int pos = 1; max_ele / pos > 0; pos *= 10)
//     {
//         CountSort(arr, n, pos);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }


#include <bits/stdc++.h>
using namespace std;

void CountSort(int arr[], int n, int pos)
{
    const int k = 10; // assuming decimal digits

    vector<int> freq(k, 0);
    vector<int> ans(n);

    // calculate the frequency of elements at that position
    for (int i = 0; i < n; i++)
    {
        freq[(arr[i] / pos) % k]++;
    }

    // cumulative frequency of freq
    for (int i = 1; i < k; i++)
    {
        freq[i] += freq[i - 1];
    }

    // sorting the elements at that position
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[(arr[i] / pos) % k]] = arr[i];
    }

    // copy the sorted array back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_ele = *max_element(arr, arr + n);

    for (int pos = 1; max_ele / pos > 0; pos *= 10)
    {
        CountSort(arr, n, pos);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
