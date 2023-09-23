#include<iostream>
using namespace std;

int main(){
    int array1[]={1,2,3,4,5};
    int k;
    cout<<"Enter the intiger by which you want to rotate:"<<endl;
    cin>>k;
    
    int n=sizeof(array1)/sizeof(array1[0]);
    int array2[n];
   

    for (int i =n-k ,j=0; j,i <n ;j++, i++)
    {   
        array2[j]=array1[i];
        
    }
   for (int i = 0,j=k; j,i < n;j++, i++)
   {
      array2[j]=array1[i];
   }
    
    for (int i = 0; i <n; i++)
    {
        cout<<array2[i]<<" ";
    }
    


}