#include <algorithm>
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
     v.push_back(2);
      v.push_back(3);
       v.push_back(4);
        v.push_back(5);

    int k;
    cout<<"Enter the position by which you want to reverse the element:";
    cin>>k;

    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
  

   for (int a:v)
   {
    cout<<a<<" ";
   }

   

   
}