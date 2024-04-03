// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;

//     int k;
//     cin >> k;

//     // int maxZero = 0;
//     int maxLenth = INT_MIN;
//     int idx = -1;
//     int currentZero = 0;
//     for (int i = 0; i < str.length() - 1; i++)
//     {
//         currentZero = 0;
//         for (int j = i; j < str.length()-1; j++)
//         {
//             if (str[j] == '0')
//             {
//                 currentZero++;
//                 if (currentZero <= k)
//                 {
//                     idx = j;
//                 }
//             }
//             else
//             {
//                 if (str[j] != '0')
//                 {
//                     idx = j;
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             if(j==str.length())
//             break;
//         }
//         maxLenth = max((idx - i)+1, maxLenth);
//     }
//     cout << maxLenth << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int k;
    cin >> k;

    int maxLenth = INT_MIN;
    int idx = -1;
    int currentZero = 0;

    for (int i = 0; i < str.length(); i++) {
        currentZero = 0;
        for (int j = i; j < str.length(); j++) {
            if (str[j] == '0') {
                currentZero++;
                if (currentZero > k) {
                    break; // Break if more than k zeros encountered
                }
            }
            idx = j; // Update index regardless of character
            maxLenth = max(maxLenth, idx - i + 1); // Update maxLenth inside loop
        }
    }

    cout << maxLenth << endl;

    return 0;
}
// time complexcity=O(n*n);
// Space complexcity= O(1);