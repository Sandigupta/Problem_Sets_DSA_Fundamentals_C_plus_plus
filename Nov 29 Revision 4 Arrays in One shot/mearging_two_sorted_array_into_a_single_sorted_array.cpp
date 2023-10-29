#include<iostream>
// #include<vector>
#include <bits/stdc++.h> 
// #include<algorithm>
// #include<math.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;

    vector<int> v1(m);
    for (int i = 0; i < m;i++){
        cin >> v1[i];
    }

    vector<int> v2(n);
    for (int i = 0; i < n;i++){
        cin >> v2[i];
    }

    // int l = m + n;
    vector<int> v3;
    for (int i = 0; i < m; i++)
    {
        v3.push_back(v1[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        v3.push_back(v2[i]);
    }
    sort(v3.begin(),v3.end());
     for (int i = 0; i < v3.size();i++){
        cout<< v3[i]<<" ";
    }

}