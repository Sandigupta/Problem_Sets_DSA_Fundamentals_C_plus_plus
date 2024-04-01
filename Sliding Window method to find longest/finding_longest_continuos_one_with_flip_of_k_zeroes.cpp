#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;

    int s = 0; // start pointer
    int e = 0; // end pointe r

    int numzero = 0;
    int maxLength = 0;
    while (e < str.length() and s <= e)
    {
        if (str[e] == '0')
        {
            numzero++;
        }
        while (numzero > k)
        {
            if (str[s] == '0')
            {
                numzero--;
                s++;
            }
        }
        maxLength = max(e - s + 1, maxLength);
        e++;
    }
    cout << maxLength << endl;
}

// time complexcity =O(n);
// space complexcity=O(1);