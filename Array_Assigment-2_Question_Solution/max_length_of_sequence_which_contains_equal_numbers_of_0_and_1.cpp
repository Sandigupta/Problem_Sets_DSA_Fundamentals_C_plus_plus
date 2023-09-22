#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of a vector:";
    cin>>n;

    vector<int> v;
    cout<<"Enter the elements of vector:";
    for (int i = 0; i < n; i++)
    {
        /* code */
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int numZeros=0;
    int numOne=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]==0)
        {
            numZeros++;
        }
        else if(v[i]==1)  {
            numOne++;
        }
    }

    if (numZeros<=numOne)
    {
      cout<<"The longest sequence is:"<<2*numZeros;
      
    }
    else {
         cout<<"The longest sequence is:"<<2*numOne;
    }
    

    
}