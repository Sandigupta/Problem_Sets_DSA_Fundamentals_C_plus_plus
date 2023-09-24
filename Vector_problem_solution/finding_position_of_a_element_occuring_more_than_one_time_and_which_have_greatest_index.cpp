// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> v{1,2,5,1,6,7,1};
//     int max_idx=-1;
//     int x;
//     cout<<"Enter the element you want to find:"<<endl;
//     cin>>x;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]==x){
//             if (i>max_idx)
//             {
//                 max_idx=i;
//             }    
//         }
//     }
//     cout<<"Max position of element in the vector:"<<max_idx<<endl;
    
// }



//  METHOD SECOND OF FINDIN LAST OCCURENCE OF AN ELEMENT IN A VECTOR.
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v{1,2,5,1,6,7,1};
    int max_idx=-1;
    int x;
    cout<<"Enter the element you want to find:"<<endl;
    cin>>x;
    for (int i = v.size()-1; i >=0; i--)
    {
        if(v[i]==x){
            if (i>max_idx)
            {
                max_idx=i;
            }
            
        }
        break;
    }
    cout<<"Max position of element in the vector:"<<max_idx<<endl;
    
}

