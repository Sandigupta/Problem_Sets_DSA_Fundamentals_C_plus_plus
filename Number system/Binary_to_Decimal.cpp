// #include<iostream>
// using namespace std;

// int main(){
//     int BinNum;
//     cout<<"Enter a binary number:";
//     cin>>BinNum;
//     int count=0;
//     int sum=0;
//    while (BinNum!=0)
//    {
//      BinNum=BinNum/10;
//      count++;
//    }
//    cout<<count<<endl;
//    for (int i = 1; i<=count; i++)
//    {      int t=1;
//             for (int j = 1; j < i ; j++)
//                 {
//                   t=t*2;
//                 }
//        int r=BinNum%10;
//        BinNum=BinNum/10;
//        sum=sum+r*t;
//    }
//    cout<<sum<<endl;  
// }



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    int power=1;
    while (n>0)
    {
        int lastdigit=n%10;
        ans +=lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<ans<<endl;
}