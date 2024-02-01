#include<bits/stdc++.h>
using namespace std;

void CountSort(int arr[], int n){
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++) {
        max_ele = max(arr[i], max_ele);
    }

    vector<int> freq(max_ele + 1, 0);
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= max_ele; i++) {  // Corrected this line
        freq[i] += freq[i - 1];
    }

    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        ans[--freq[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}

int main(){
    int arr[] = {5, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    CountSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
