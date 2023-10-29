#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int fptr = 0;
    int eptr = n - 1;
    bool flag = false;
    while (fptr<eptr)
    {
        if (v[fptr]+v[eptr]==x){
        flag = true;
        break;
        }
        else
        {
           if (v[fptr]+v[eptr]<x)
           {
               fptr++;
           }
           else
           {
               eptr--;
           }   
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    
}