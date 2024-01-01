#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n){
    if (m==0 || n==0)
    {
        return max(m, n);
    }

    int result =((m > n) ? gcd(m % n, n) : gcd(m, n % m));
    return result;
}

int main(){
    int m, n;
    cin >> m >> n;

   int result= gcd(m, n);
   cout << result << endl;
}