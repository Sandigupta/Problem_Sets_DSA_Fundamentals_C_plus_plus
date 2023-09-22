#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vectors:";
    cin>>n;

    vector<int> v;
    cout<<"Enter the elemnets of vectors:";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

   vector<int> ans(n,0);

    // int left_ptr=0;
    // int middile_ptr=1;
    // int right_ptr=2;
    // int pro=0;
    
    for (int left_ptr = 0; left_ptr <n-2 ; left_ptr++)
    { 
        for (int middile_ptr=left_ptr+1; middile_ptr <n-1 ; middile_ptr++)
        {
           for (int right_ptr=middile_ptr+1; right_ptr < n; right_ptr++)
           {
            ans.push_back(v[left_ptr]*v[middile_ptr]*v[right_ptr]);
           }
           
        }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}