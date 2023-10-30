#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ptr1 = 0;
    int ptr2 = 1;
    int ptr3 = n - 1;
    int flag = false;
    while (ptr1<ptr2 && ptr2<ptr3)
    {
        if(v[ptr1]+v[ptr2]+v[ptr3]==x){
            flag = true;
            break;
        }
        else if(v[ptr1]+v[ptr2]+v[ptr3]<x){
           
            ptr2++; 
            ptr1++;
              
              
        }
      else if(v[ptr1]+v[ptr2]+v[ptr3]>x){
            ptr3--;
    }
    }
    
    if (flag)
    {
    cout << "YES" << endl;
    }
    else
    {
    cout << "NO" << endl;
    }
    
    
}