// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void squaringElement(vector<int> &v, int n){
//      for (int i = 0; i < n; i++)
//      {
//         int a=v[i];
//         a=a*a;
//         v[i]=a;
//      }
       
//     sort(v.begin(),v.end()); 
        
// }

// int main(){
//     int n;
//     cout<<"Enter the size";
//     cin>>n;

//     vector<int> v;
//     cout<<"Enter the elements of non decreasing shorted array";

//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin>>ele;
//         v.push_back(ele);

//     }
//      squaringElement(v,n);
//      for (int i = 0; i < n; i++)
//      {
//         cout<<v[i]<<" ";
//      }
     
// }









//  int lefr_ptr=0;
    //  int right_ptr=1;
    //  while (right_ptr<2*n)
    //  {
    //     if (v[lefr_ptr]>v[right_ptr])
    //     {
    //         swap(v[lefr_ptr],v[right_ptr]);
    //     }
        
    //      if (v[lefr_ptr]<v[right_ptr])
    //  {
    //    lefr_ptr++;
    //    right_ptr++;
    //  }
     
    //  }
    // int lefr_ptr=0;
    //  int right_ptr=n-1;
    //  while (lefr_ptr<right_ptr)
    //  {
    //     if (v[lefr_ptr]>=v[right_ptr])
    //     {
    //         swap(v[lefr_ptr],v[right_ptr]);
    //     }
        
    //      if (v[lefr_ptr]<v[right_ptr])
    //  {
    //    lefr_ptr++;
    //    right_ptr--;
    //  }
     
    //  }

    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 1+i; j < n; j++)
    //    {
    //     if (v[i]<v[j])
    //     {
    //       v.push_back(v[i]);
           
    //     }     
    //    }  
    // }


      //  int lefr_ptr=0;
    //  int right_ptr=1;
    //  while (lefr_ptr<right_ptr)
    //  {
    //     if (v[lefr_ptr]>v[right_ptr])
    //     {
    //         swap(v[lefr_ptr],v[right_ptr]);
    //     }
        
    //      if (v[lefr_ptr]<v[right_ptr])
    //  {
    //    lefr_ptr++;
    //    right_ptr++;
    //  }
     
    //  }
    

    /*...........................................METHOD SECOND..........................................................................*/

    #include<iostream>
    #include<vector>
    #include <cmath> 
    using namespace std;
    
    void squaringElements(vector<int> &v){
         int n=v.size();
         vector<int> ans;

         int left_ptr=0;
         int right_ptr=n-1;
        while (left_ptr<=right_ptr)
        {
          if (abs(v[left_ptr])>abs(v[right_ptr]))
         {
           ans.push_back(v[left_ptr++]*v[left_ptr++]);
           left_ptr++;
         }
          else 
         {
             ans.push_back(v[right_ptr++]*v[right_ptr++]);
             right_ptr--;
        }
       
    }
    
            

    }
    int main(){
        int n;
        cout<<"Enter the size of vector:";
        cin>>n;

        vector<int> v;
        cout<<"Enter the elements of the vector:"<<endl;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        
       squaringElements(v);
    }