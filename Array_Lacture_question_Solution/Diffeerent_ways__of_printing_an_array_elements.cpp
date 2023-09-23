#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<size<<endl;
    cout<<sizeof(array[0])<<endl;
    printf("\n\n");
    //printing each element of an array.....
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
     
     printf("\n\n");
    //each elements..
    for(int ele:array){
        cout<<ele<<" ";
    }
    
    printf("\n\n");
    //while loop......
    int index=0;
    while (index<size)
    {
       cout<<array[index]<<" ";
       index++; 
    }
    
}