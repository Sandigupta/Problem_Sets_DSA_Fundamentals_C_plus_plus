#include<bits/stdc++.h>
using namespace std;

int PeakInMountainArray(vector<int> &v){
    int l = 0;
    int h = v.size() - 1;
    int ans = -1;

    while (l<=h)
    {
        int mid = l + (h - l) / 2;
        // if (mid==0)  // this is added by me to get peak 
        // {            //element in the decreasing array.
        //     return 0;
        // }
        if(v[mid]>v[mid-1]){
            ans = max(mid,ans);
            l = mid + 1;
        }else
        {
            h = mid - 1;
        }
        
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
     

     int idxofPeakele = PeakInMountainArray(v);
     cout <<"Index:"<<idxofPeakele <<" "<<"Element:"<<v[idxofPeakele]<< endl;
}