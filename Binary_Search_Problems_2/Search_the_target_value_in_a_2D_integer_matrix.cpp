#include<bits/stdc++.h>
using namespace std;
int searchMatrix(vector<vector<int>> &v,int t){
    int n = v.size();
    int m = v[0].size();
    int l = 0;
    int h = m * n - 1;

    while (l<=h)
    {
        int mid = l + (h - l) / 2;
        int x = mid / m;
        int y = mid % n;
        if(v[x][y]==t){
            return true;
        }
        else if(v[x][y]<t){
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> v{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target;
    cin >> target;

    int true_or_false = searchMatrix(v, target);
    cout << true_or_false << endl;
}