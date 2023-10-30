#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >>n>>x;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ptr1 = 0;
    int ptr2 = n - 1;
    int count = 0;
    while (ptr1<ptr2)
    {
        if(v[ptr1]+v[ptr2]==x){
            count++;
            ptr1++;
            ptr2--;
        }
        else if(v[ptr1]+v[ptr2]<x)
        {
            ptr1++;
        }
        else
        {
            ptr2--;
        }
        
    }
    cout << count << endl;
}