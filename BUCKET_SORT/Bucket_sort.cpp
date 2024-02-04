#include<bits/stdc++.h>
using namespace std;

void bucketSort(float arr[],int n){
    vector<vector<float>> bucket(n, vector<float>());
     
     for (int i = 0; i < n; i++)
     {
        int idx = arr[i] * n;

        bucket[idx].push_back(arr[i]);
     }
     
    for (int i = 0; i < n; i++)
    {   
        if(!bucket[i].empty())
        sort(bucket[i].begin(),bucket[i].end());
    }

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            arr[k++] = bucket[i][j];
            
        }
        
    }
    
}


int main(){
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39};

    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}