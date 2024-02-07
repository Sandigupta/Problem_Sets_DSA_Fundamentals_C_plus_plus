#include<bits/stdc++.h>
using namespace std;

int BinarySort(vector<int> &v,int t){
    int l = 0;
    int h = v.size() - 1;

    while(l<=h){
        int mid = (l + h) / 2;
        if(v[mid]==t){
            return mid;
        }
        else if(t<v[mid]){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> v{1, 9, 13, 15, 18, 22, 35, 40};

    int target;
    cin >> target;

    int idx=BinarySort(v, target);
    cout << idx << " " << v[idx] << endl;
}