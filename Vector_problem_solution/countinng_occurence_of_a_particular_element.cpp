#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"Enter the elemnts in the vector:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    int x;
    cout<<"Enter the element you want to find:";
    cin>>x;
    
    int count=0;
    

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==x)
        {
           count++; 
        }
        
    }
   cout<<"Occurence is:"<<count<<endl; 
}