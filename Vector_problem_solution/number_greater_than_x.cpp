#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"Enter the elements of the vectors"<<endl;
    
    for (int i = 0; i < 6; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    int x;
    cout<<"Enter the elements for which you want to find:";
    cin>>x;
    
    int count=0;

    for (int num:v)
    {
        if(num>x)
        count++;
    }
    cout<<"Total numbers are:"<<count;


 return 0;
}
