#include<bits/stdc++.h>
using namespace std;

bool diffofPair(vector<int>& v1,int n,int x){
    int ptr1 = 0;
    int ptr2 = 1;
    bool f;
    while (ptr1<ptr2)
    {
        if (abs(v1[ptr1]-v1[ptr2])==x)
        {
            f =true;
            break;
        }
        else if(abs(v1[ptr1]-v1[ptr2])<x){
            ptr2++;
        }
        else{
            ptr1++;
        }
        
    }
      return f;
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

    bool flag=false;
    flag= diffofPair(v, n, x);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}