//longest_common_prifix_string_amongest_array_of_string_by_maam_method
#include <bits/stdc++.h>
using namespace std;

string longestPrifix(vector<string> &str, int n)
{

    int i = 0;
    int j = 0;
    string ans = "";
    while (i < str[0].length() and j < str[n-1].length())// time complexcity is O(min(fist and last string))
    {
        if (str[0][i] == str[n-1][j])
        {
            ans += str[0][i];
        }
        else
        {
            break;
        }
        i++;
        j++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;

    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    sort(str.begin(), str.end());//its time complexcity is=o(nlog(n)*m) here m is general size of strings. and nlog(n) is time taken to sort n elements by sort function.
    string ans = longestPrifix(str, n);
    cout << ans << endl;
}