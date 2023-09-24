#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    for (int i = 0; i <5; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
     
    v.insert(v.begin()+2,9);
   

     for (int j = 0; j < v.size(); j++)
     {
        cout<<v[j]<<" ";
     }
     
      v.erase(v.end()-2);
     cout<<endl;
     for(int ele:v){
        cout<<ele<<" ";
     }
     cout<<endl;

    //  using while loop
    int idx=0;
    while (idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
    
}