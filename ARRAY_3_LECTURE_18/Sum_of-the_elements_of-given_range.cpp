// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements  of array:";
//     for (int i = 0; i < n; i++)
//     {
//        cin>>arr[i];
//     }
     
//     int query;
//     cout<<"Enter the query:";
//     cin>>query;
//     while (query)
//     {
    
//      int l,r;
//     cout<<"Enter the initial index and final index:"<<endl;
//     cin>>l>>r;
//    int sum=0;
//     for (int i = l-1; i <=r-1 ; i++)
//     {
//        sum+=arr[i];
//     }
//      cout<<"Sum between these indexes is:"<<sum<<endl;
//      query--;
//     }
    
   
    
// }

/*......................................................METHOD SECOND...................................................................*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int> v(n+1,0);
    cout<<"Enter the elements of array:"<<endl;
    for (int i = 1; i < n+1; i++)
    {
        cin>>v[i];
    }

    for (int i = 1; i < n+1; i++)
    {
        v[i]+=v[i-1];
    }
    
    int query;
    cout<<"Enter the query:";
    cin>>query;

    while (query--)
    {
        int l,r;
        cout<<"Enter the initial and final position:";
        cin>>l>>r;

        int ans=0;
        ans=v[r]-v[l-1];
        
        cout<<"Sum is:"<<ans<<endl;

    }
    
    
}