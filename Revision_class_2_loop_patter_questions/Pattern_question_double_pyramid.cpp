// #include<iostream>
// using namespace std;

// int main(){
//     int x=97;

//     // char ch=(char)x;
//     int q=4;
   
//     for (int i = 0; i < 4; i++)
//     {    
//         for (int k = 4; k>0; k--)
//         {
//           cout<<" ";
//         }
        
//         for (int j = 0; j < i; j++)
//         {
//            cout<<(char)x<<" " ;
//         }

//         cout<<endl;  
//     }
    
    
     
    
    
    
// }


#include<iostream>
using namespace std;

int main(){
    // int x=96;

    // char ch=(char)x;

    for (int i = 1; i <=5; i++)
    {
        for (int j = 5-i; j > 0; j--)
        {
            cout<<" "<<"  ";
        }

        for (int k = 0; k < 2*i-1; k++)
        {
           cout<<(char)('A'+k)<<"  "; 
        }  

        cout<<endl;

        
        
    }
    for (int i = 6; i <=10; i++)
    {   
        int l = 0;
        for (; l <i-5 ; l++)
        {
            cout<<" "<<"  ";
        }
       l-=1;
        for (int j = 0; j <7-2*l; j++)
        {
            cout<<(char)('A'+j)<<"  ";
        }

        cout<<endl;
        
    }
    
}