#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,int m,int n){
    if(i==m-1 and j==n-1)
        return 1;
    if(i>=m or j>=n)
        return 0;

    int result = f(i, j + 1, m, n) + f(i +1, j, m, n);
    return result;
}


int main(){
    int i=0, j=0;
    int m=3, n=3;
    // cin >> i >> j;
    // cin >> m >> n;

    int result = f(i, j, m, n);
    cout << result << endl;
}