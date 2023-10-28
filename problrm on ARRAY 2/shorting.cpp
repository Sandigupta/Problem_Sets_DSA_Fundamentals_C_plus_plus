#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector<int> &v);


int main(){
  vector<int> v{0,1,1,0,0,1,0};
//   cout<<"Enter the 0 and 1"<<endl;
//   for (int i = 0; i<n; i++)
//   {
//     int ele;
//     cin>>ele;
//     v.push_back(ele);
//   }
  int n=v.size();
  sortZeroesAndOnes(v);
  
  for (int i = 0; i < n; i++)
  {
    cout<<v[i]<<" ";
  }
  
  return 0;
}

void sortZeroesAndOnes(vector<int> &v){
  int left_ptr=0;
  int right_ptr=v.size()-1;
  
  while (left_ptr<right_ptr)
  {
    if (v[left_ptr==1 && right_ptr==0])
    {
      v[left_ptr++]=0;
      v[right_ptr--]=1;
    }
    if (left_ptr==0 )
    {
      left_ptr++;
    }

    if (right_ptr==1)
    {
       right_ptr--;
    }
  }

}