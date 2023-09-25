#include<iostream>
using namespace std;
int num_of_odd_intigers(int ,int);

int main(){
    int intial,final;
    cout<<"Enter the initial and final digits:";
    cin>>intial>>final;

   int totalOdd_num= num_of_odd_intigers(intial,final);
   cout<<totalOdd_num;

}
int num_of_odd_intigers(int i,int f){
    int count=0;
    for (int j = i; j <=f; j++)
    {
        if(j%2!=0)
        count++;
    }

    return count;
}