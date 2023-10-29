#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n>>x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(v[i]+v[j]==x){
                flag = true;
                break;
            }
        }
        
    }
    if (flag){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
}