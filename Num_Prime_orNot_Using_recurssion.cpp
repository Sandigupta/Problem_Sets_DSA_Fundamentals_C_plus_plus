#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==0 || n==1)
        return 0;
    for (int  i = 2; i*i <= n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}


int main(){
    int n;
    cin >> n;

    int flag = f(n);
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}