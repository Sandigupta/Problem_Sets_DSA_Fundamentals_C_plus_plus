#include<iostream>
using namespace std;

int main()
{
    int score;
    cout<<"Enter your score"<<endl;
    cin>>score;
    if(score>80){
        cout<<"Well done"<<endl;
    }
    else if(score>50){
        cout<<"Can improve";
    }
    else
    cout<<"Poor performance";
}