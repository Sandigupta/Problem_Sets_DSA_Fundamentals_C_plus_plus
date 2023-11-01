#include<iostream>
#include<vector>
using namespace std;

int main(){
 int n;
 cout<<"Enter the size of vector:";
 cin>>n;

 vector<int> v;
 cout<<"Enter the elements of vector:";
 for (int i = 0; i < n; i++)
 {
    int ele;
    cin>>ele;
    v.push_back(ele);
 }
 bool flag=false;
 int Prifix_sum1=0;
 int Sufix_sum2=0;
 int indexFromStart=0;
 for (int i = 0; i < n; i++)
 {
    Sufix_sum2+=v[i];
 }
 for (int i = 0; i < n; i++)
 {
    Prifix_sum1+=v[i];
    Sufix_sum2-=v[i];
    if (Prifix_sum1==Sufix_sum2)
    {
        flag=true;
        indexFromStart=i;
        break;
    }
    
 }
 if(flag){
    cout<<"Yes it is possible"<<endl;
    cout<<"The index is:"<<indexFromStart;
 }
 
}