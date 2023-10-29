// #include <cstdlib>
#include<bits/stdc++.h>
using namespace std;

bool diffOfPair(vector<int>& v1,int n,int x){
    int ptr1 = 0;
    int ptr2 = n - 1;
    int flag = false;
    while (ptr1<ptr2)
    {
        if (abs(v1[ptr1]-v1[ptr2])==x)
        {
            flag = true;
            return flag;
        }
        else if(abs(v1[ptr1]-v1[ptr2])>x)
        {
            ptr2--;
        }
        else
        {
            ptr1++;
        }
        
        
    }
    
}



int main(){
    int n,x;
    cin >> n >> x;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int flag = diffOfPair(v, n, x);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}

// abs(num) 