// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={2,3,5,7,6,1};
    
//     int n=sizeof(arr)/sizeof(arr[0]);
    
//     int max=arr[0];

//     for (int i = 0; i <n ; i++)
//     {
//       if(arr[i]>max)
//       max=arr[i];  
//     }
//        cout<<max<<endl;
 
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==max)
//         {
//             arr[i]=0;
//         }
        
//     }
    

//     int maxm=arr[0];
//     for (int j = 0; j < n; j++)
//     {
//          if (arr[j]>maxm)
//          {
//             maxm=arr[j];
//          }
         
//     }
//     cout<<"Second max Element is:"<<maxm;
    
// }


//  Same above code using functions.

// #include<iostream>
// using namespace std;

// int secondLargest(int arr[], int x);

// int main(){
//     int arr[]={2,3,5,7,6,1};
    
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int m=secondLargest(arr, n);
//     cout<<"Max element for the array:"<<m<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==m)
//         {
//             arr[i]=-1;
//         }
//     }
//     int l=secondLargest(arr, n);
//     cout<<"Second Largest elemnt is:"<<l;
// }
// int secondLargest(int arr[],int x){
    
//      int max=INT16_MIN;

//     for (int J = 0; J <x ; J++)
//     {
//       if(arr[J]>max)
//       max=arr[J];  
//     }

//     return max;
// }

#include<iostream>
using namespace std;

int secondLargestIndex(int arr[], int x);

int main(){
    int arr[]={2,3,5,7,6,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);

    int m=secondLargestIndex(arr, n);
    cout<<arr[m]<<endl;
    arr[m]=-1;

    int l=secondLargestIndex(arr, n);
    cout<<"Second Largest elemnt is:"<<arr[l];
}
int secondLargestIndex(int arr[],int x){
    
     int max=INT16_MIN;
     int index=0;
    for (int J = 0; J <x ; J++)
    {
      if(arr[J]>max)
      max=arr[J]; 
      index=J; 
    }  
    return index;
}


// #include<iostream>
// using namespace std;

// int secondLargest(int arr[], int x);

// int main() {
//     int arr[] = {2, 3, 5, 7, 6, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int m = secondLargest(arr, n);
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == m) {
//             arr[i] = -1;  // Corrected from arr[i] == -1 to arr[i] = -1
//         }
//     }

//     int l = secondLargest(arr, n);
//     cout << "Second Largest element is: " << l;
// }

// int secondLargest(int arr[], int x) {
//     int max = arr[0];
//     int secondMax = INT_MIN;  // Initialize secondMax to a very small value

//     for (int i = 0; i < x; i++) {
//         if (arr[i] > max) {
//             secondMax = max;  // Update secondMax before updating max
//             max = arr[i];
//         } else if (arr[i] > secondMax && arr[i] < max) {
//             secondMax = arr[i];
//         }
//     }

//     return secondMax;
// }
