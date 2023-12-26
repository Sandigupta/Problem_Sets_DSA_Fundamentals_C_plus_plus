#include<iostream>
#include<string.h>
using namespace std;
int first_last_mid_fun(string s, char  *first,char *last){
    int n = s.size();
    *first = s[0];
    *last = s[n - 1];
    int cnt = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='t')
            cnt++;
    }
    return cnt;
}

int main()
{
    string s;
    cin >> s;

    char first,last;
    int cnt=first_last_mid_fun(s, &first, &last);
    cout << first << " " << last << "\n";
    cout << cnt;
}