// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int> v1{2,3,4,5,8,7,6,9};
//     vector<int> v2;
    
//     int n= v1.size();
//     for (int i = 0; i < n; i++)
//     {
//        if(v1[i]%2==0)
//        {
//         v2.push_back(v1[i]);
//        }
//     }
//     for (int i = 0; i < n; i++)
//     {
//        if (v1[i]%2!=0)
//        {
//         v2.push_back(v1[i]);
//        }
       
//     }
     
//     for (int i = 0; i < v2.size(); i++)
//     {
//         cout<<v2[i]<<" ";
//     }
    
    
// }

/*........................USING FUNCTION..................................*/

// #include<iostream>
// #include<vector>
// using namespace std;

// void evenFirst(vector<int> &v1,vector<int> &v2);

// int main(){

//     vector<int> v1{2,3,4,5,8,7,6,9};
//     vector<int> v2;
    
  
    
//     evenFirst(v1,v2);
     
//     for (int i = 0; i < v2.size(); i++)
//     {
//         cout<<v2[i]<<" ";
//     }
    
    
// }

// void evenFirst(vector<int> &v1,vector<int> &v2){

//       int n= v1.size();
   
//      for (int i = 0; i < n; i++)
//     {
//        if(v1[i]%2==0 && v2.size()<n)
//        {
//         v2.push_back(v1[i]);
//        }
       
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (v1[i]%2!=0 )
//         {
//              v2.push_back(v1[i]);
//         }
        
//     }
    
// }



/*....................................................BY TRAVERSING THE VECTOR.........................................................*/

#include<iostream>
#include<vector>
using namespace std;

void evenFirst(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while (left_ptr<right_ptr)
    {
         if (v[left_ptr]%2!=0 && v[right_ptr]%2==0)
        {
            swap(v[left_ptr],v[right_ptr]);
        }

        if (v[left_ptr]%2==0)
        {
           left_ptr++;
        }

        if (v[right_ptr]%2!=0)
        {
            right_ptr--;
        }
    }    
    
}

int main(){
    int n;
    cout<<"Enter the size of the vector"<<endl;
    cin>>n;

    vector<int> v;
    cout<<"Enter the elements of vector"<<endl;
    for (int i = 0; i < n; i++)
    {
      int ele;
      cin>>ele;
      v.push_back(ele);
    }

    evenFirst(v);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
  return 0;  
}

