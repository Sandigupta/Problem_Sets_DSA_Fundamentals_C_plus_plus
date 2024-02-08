#include<bits/stdc++.h>
using namespace std;

int ByBinarySearch(vector<int> &v,int t){
    int l = 0;
    int h = v.size() - 1;
    int ans = -1;
    while (l<=h)
    {
        int mid = l + (h - l) / 2;
        
        if (v[mid]==t)
        {   
             ans = mid;  
            h = mid - 1;
        }
        else if(v[mid]<t){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> v{2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int k;
    cin >> k;

    int idx = ByBinarySearch(v, k);
    cout << idx << endl;
}


 // for (int i = mid-1; i >= l; i--)
            // {
            //     if(v[i]==t)
            //     idx = min(idx, i);
                  
            // }