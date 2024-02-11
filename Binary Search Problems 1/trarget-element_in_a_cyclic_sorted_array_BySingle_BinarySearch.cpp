#include<bits/stdc++.h>
using namespace std;

int targetIdx(vector<int> &v,int t){
    int l = 0;
    int h = v.size() - 1;

    while(l<=h){
        int mid = l + (h - l) / 2;
        if(v[mid]==t){
            return mid;
        }
        if(v[mid]>=v[l]){
           if(t>=v[l] and t<=v[mid]){
               h = mid - 1;
           }else{
               l = mid + 1;
           }
        }else{
            if(t>=v[mid] and t<=v[h]){
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }
    }
    return -1;
}


int main(){
    vector<int> v{3, 4, 5, 1, 2};

    int target;
    cin >> target;

    int idx = targetIdx(v, target);
    cout << idx << endl;
}