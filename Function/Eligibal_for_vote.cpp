// #include<iostream>
// using namespace std;

// void vote(int);
// int main(){
//     int Age;
//     cout<<"Enter the age of persion: ";
//     cin>>Age;
   
//       vote(Age); 
    
// }
// void vote(int x){
//     if(x>=18)
//     cout<<"YES"<<endl;
//     else
//     cout<<"NO"<<endl;
// }


/*<------------------------- METHOD SECOND---------------------------------------->*/
#include<iostream>
using namespace std;

bool vote(int, int);
int main(){
    int Age,Limit;
    cout<<"Enter the age of persion and age limit: ";
    cin>>Age>>Limit;
     int elegible_for_vote= vote(Age,Limit);
     
      if(elegible_for_vote) 
      cout<<"YES";
      else
      cout<<"NO";
}
bool vote(int x,int y){
    if(x>=y)
    return true;
    else
    return false;
    
}