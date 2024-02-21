#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &v){
    int l = 0;
    int h = v.size() - 1;

    int ans = -1;
    while (l<=h)
    {
        int mid = l + (h - l) / 2;
        if(mid==0){
            if(v[mid]>v[mid+1]){
            return 0;
            }else{
                return 1;
            }
        }
        else if(mid==h){
            if(v[mid]>v[mid-1])
            return h ;
            else
                return h - 1;
        }else{
            if(v[mid]>v[mid-1] && v[mid]>v[mid+1]){
                return mid;
            }
            else if(v[mid]>v[mid-1]){
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int idxofPeakEle = findPeak(v);
    cout << "index:" << idxofPeakEle << " "
         << "Element:" << v[idxofPeakEle] << endl;
}