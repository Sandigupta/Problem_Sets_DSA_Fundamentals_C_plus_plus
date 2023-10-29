#include<bits/stdc++.h>
using namespace std;

 void squreOfVector(vector<int>& v2,int n,vector<int>& v3){
     int ptr1 = 0;
     int ptr2 = n - 1;
   
     while (ptr1<=ptr2)
     {
        if(v2[ptr1]*v2[ptr1]>=v2[ptr2]*v2[ptr2]){
           
            v3.push_back(v2[ptr1] * v2[ptr1]);
           
            ptr1++;
        }
        else if(v2[ptr1]*v2[ptr1]<=v2[ptr2]*v2[ptr2]){
            
             v3.push_back(v2[ptr2] * v2[ptr2]);
            ptr2--;
            
        }
     }
     reverse(v3.begin(), v3.end());
 }


int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

     vector<int> v1(n);

     squreOfVector(v,n,v1);

     for (int i = 0; i < n; i++)
     {
        cout << v1[i] <<" ";
     }
     
}