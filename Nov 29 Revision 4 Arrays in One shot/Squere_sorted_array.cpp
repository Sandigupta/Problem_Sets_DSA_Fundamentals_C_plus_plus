#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        v1.push_back(v[i] * v[i]);
    }
    sort(v1.begin(), v1.end());
    
    for (int i = 0; i < n; i++)
    {
        cout<<v1[i]<<" ";
    }

}