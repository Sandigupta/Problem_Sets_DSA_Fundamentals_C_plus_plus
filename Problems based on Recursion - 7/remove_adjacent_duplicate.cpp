#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    vector<char> v;
    for(int i = 0; i < s.length();i++){
        
        if(i==0)
        v.push_back(s[i]);
        else
         v.push_back(s[i-1]);
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
                continue;
            else{
                i = j;
                break;
            }    

       }
       
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
}