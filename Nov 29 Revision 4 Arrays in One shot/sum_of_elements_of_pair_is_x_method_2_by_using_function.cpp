#include <bits/stdc++.h>
using namespace std;

bool sumOfPair(vector<int>& v1,int n,int x){
    int fptr = 0;
    int eptr = n - 1;
    bool flag = false;
    while (fptr<eptr)
    {
        if (v1[fptr]+v1[eptr]==x){
        flag = true;
        break;
        }
        else
        {
           if (v1[fptr]+v1[eptr]<x)
           {
               fptr++;
           }
           else
           {
               eptr--;
           }   
        }
    }
    return flag;
}
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
    int flag = sumOfPair(v, n, x);

    if (flag)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    
}
// 