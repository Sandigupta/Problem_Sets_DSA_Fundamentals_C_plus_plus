// #include<iostream>
// using namespace std;
 
// int largestElement(int array[],int x);

// int main(){
//     int array[]={2,3,5,7,6,7,1};
//     int n=sizeof(array)/sizeof(array[0]);
    
//     int k=1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j =i+1 ; j < n; j++)
//         {
//             if (array[i]==array[j])
//             {
//                 k++;
//             }
            
//         }
        
//     }
     

//     while (k)
//     {
//         int largestElementIndex=largestElement(array , n);
//     cout<<"Largest element is:"<<array[largestElementIndex]<<endl;
//     array[largestElementIndex]=-1;

//     k--;
//     }
//     int secondlargestElementIndex=largestElement(array , n);
//     cout<<"Second largest element is:"<<array[secondlargestElementIndex];
    
  
// }
// int largestElement(int array[],int x){
//     int max=INT_MIN;
//     int index=-1;
//     for (int i = 0; i < x; i++)
//     {
//         if(array[i]>max)
//         max=array[i];
//         index=i;
//     }
//     return index;
// }


#include<iostream>
#include <climits>
using namespace std;

int largestElementIndex(int arr[],int siz);

int main()
{
 int arr[]={2,3,5,7,6,7,1};
 int siz=sizeof(arr)/sizeof(arr[0]);
  
int IndexOfLargestEle=largestElementIndex(arr,siz);
 
cout<<"Largest element is:"<<arr[IndexOfLargestEle]<<endl;
for (int i = 0; i < siz; i++)
{
 if (arr[i]==arr[IndexOfLargestEle])
    {
         arr[i]=-1;
    }   
}
  int secondLargestEle=largestElementIndex(arr,siz);
   cout<<"Second largest element is:"<<arr[secondLargestEle]<<endl;
 
}

int largestElementIndex(int arr[],int siz){
    
    int max=INT_MIN;
    int index=-1;
    for (int i = 0; i <siz ; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            index=i;
        }    
    }
    return index;
}
