#include<bits/stdc++.h>
using namespace std;

void f(vector<int> &v,vector<int> &v2){
    int n = v.size();
    
    for (int i = 0; i < n; i++)
    {
        if(v[i]>0){
            v2.push_back((v[i]));
        }
    }
     for (int i = 0; i < n; i++)
    {
        if(v[i]==0){
            v2.push_back((v[i]));
        }
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
    vector<int> v2;
    f(v,v2);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    
}