#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> &v,int t){
    int l = 0;
    int h = v.size() - 1;
    int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (v[mid] >= t)
        {
            ans = mid;
            h = mid - 1;
        }else{
            l = mid + 1;
        }
       
   }
   return ans;
}

int upperBound(vector<int> &v,int t){
    int l = 0;
    int h = v.size() - 1;
    int ans = -1;
    while(l<=h)
    {
        int mid = l + (h - l) / 2;
        if(v[mid]>t){
            ans = mid;
            h = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return ans;
}


int main(){
    vector<int> v{1, 2, 3, 3, 3, 5, 11};

    int target;
    cin >> target;

    int lowidx = lowerBound(v, target);
    if(v[lowidx]!=target){
        cout << -1 << " " << -1 << endl;
    }else
    {
        int upperidx= upperBound(v, target);

        cout << lowidx << " " << upperidx-1 << endl;
    }
    
}