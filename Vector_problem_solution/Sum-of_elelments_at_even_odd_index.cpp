// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> v{4, 38 ,37 ,398, 128, 210};\
//     int evenSum=0;
//     int oddSum=0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (i%2==0)
//         {
//            evenSum+=v[i]; 
//         }
//         else if (i%2!=0)
//         {
//             oddSum+=v[i];
//         }
        
//     }
//     cout<<"Difference is:"<<evenSum-oddSum<<endl;
// }




//  method second to calculate the same avobe think


#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v{4, 38 ,37 ,398, 128, 210};\
    int difference_Sum=0;
    
    for (int i = 0; i < v.size(); i++)
    {
        if (i%2==0)
        {
           difference_Sum+=v[i]; 
        }
        else
        difference_Sum-=v[i];
    }
    cout<<"Difference is:"<<difference_Sum<<endl;
}