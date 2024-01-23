#include<bits/stdc++.h>
using namespace std;

void selection(vector<int> &v){
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if(v[min_idx]>v[j]){
                min_idx = j;
            }
        }
        if(i!=min_idx)
        swap(v[i], v[min_idx]);
    }
    
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    selection(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
}