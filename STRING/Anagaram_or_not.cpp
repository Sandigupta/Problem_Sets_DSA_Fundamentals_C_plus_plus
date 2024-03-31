#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    vector<int> v1(128, 0);
    vector<int> v2(128, 0);

    for (int i = 0; i < s1.length(); i++)
    {
        v1[int(s1[i])]++;
    }
    
    for (int j = 0; j <s2.length(); j++)
    {
        v2[int(s2[j])]++;
    }

    bool flag = true;
    for (int i = 97; i <=122; i++)
    {  
      if(v1[i]!=v2[i]){
          flag = false;
      }

    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}