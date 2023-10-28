// #include<iostream>
// #include<vector>

// using namespace std;

// void shotingVector(vector<int>& v ){
//     int numZeroes=0;
//     for (int ele:v)
//     {
//        if (ele==0)
//        {
//           numZeroes++;
//        } 
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (i<numZeroes)
//         {
//             v[i]=0;
//         }
//         else
//         v[i]=1;
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
    
    
// }

// int main(){
    
//     vector<int> v{1,0,0,1,0,1,0};

//     shotingVector(v);
// }


// Shorting the vector only by using the single loop in the function....



// #include<iostream>
// #include<vector>

// using namespace std;

// void shotingVector(vector<int> &v){
    
//     int n=v.size();
//     for (int i = 0; i < n; i++)
//     {
//       for (int j=n-1; j >n/2; j--)
//       {
//         if (v[i]!=v[j])
//         {
//             v[i]=v[j]; 
//         }
        
//       }
      
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
// }

// int main(){
   
//     vector<int> v{1,0,0,1,0,1,0};

//      shotingVector(v);
// }



/*................................another method...............................................*/
