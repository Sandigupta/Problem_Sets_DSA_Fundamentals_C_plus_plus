#include<iostream>
#include<climits>
using namespace std;

int maxElement(int array[],int size);
int main(){
    int array[]={2,3,5,7,6,1,7};
    int secondLarg=maxElement(array,7);
    cout<<secondLarg<<endl;
}


int maxElement(int array[],int size){
    int max=array[0];
    int secondMax=INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        
       else if (array[i]>  secondMax && max!=array[i])
        {
          secondMax=array[i];  
        }
    }
    // for (int i = 0; i < size; i++)
    // {
        
        
    // }
    
    return secondMax;
}