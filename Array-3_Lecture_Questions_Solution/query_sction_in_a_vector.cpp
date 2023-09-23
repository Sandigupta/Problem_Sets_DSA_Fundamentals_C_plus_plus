#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector";
    cin>>n;
    vector<int> v(n);
    
    cout<<"Enter the elements of vectors:"<<endl;

    for (int i = 0; i < n; i++)
    {
       cin>>v[i];
    }
    
    const int N=1e5+10;
    vector<int> freq(N,0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }
    
    cout<<"Enter queries";
    int q;
    cin>>q;

    while (q--)
    {
        int queryElement;
        cout<<"Enter the query element";
        cin>>queryElement;
        cout<<freq[queryElement]<<endl;
    }
    
}