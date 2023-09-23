// #include<iostream>
// using nameaspace stad;

//  int main(){
//     int n;
//     cout<<"Enter the lenght of array";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements in the given array";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int m;
//     cout<<"Enter the element you want to find"<<endl;
//     cin>>m;
//     for(int j=0;j<n;j++){
//       if(arr[j]==m)
//       cout<<j<<endl;
//       else
//       cout<<"-1"<<endl;
//     }
//  }
//above code is wrong




 #include<iostream>
using namespace std;

 int main(){
    int n;
    cout<<"Enter the lenght of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the given array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the element you want to find"<<endl;
    cin>>m;
    int count=-1;
   
    for(int j=0;j<n;j++){
      if(arr[j]==m){
      count=j;
      break;
      }
    }
    // if(count>=0)
    //  cout<<j<<endl;
    //  else
     cout<<count;
 }