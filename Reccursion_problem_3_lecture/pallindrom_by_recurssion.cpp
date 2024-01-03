#include<iostream>
using namespace std;

bool pallindrom(int num,int *temp){
   
//    Base case
    if(num>=0 and num<=9){
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }    

    bool result=(pallindrom(num / 10,temp) and (num%10)==((*temp)%10));
    (*temp) /= 10;
    return result;
}


int main(){
    int num=12621;
    // cin >> num;

    // bool flag = true;
    int temp = num;
    cout<<pallindrom(num, &temp);
    
}