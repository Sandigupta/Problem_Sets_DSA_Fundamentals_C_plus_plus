#include<bits/stdc++.h>
using namespace std;

bool canPlaceStudents(vector<int> &pos,int s,int mid){
    int studentReqd = 1;
    int lastPlace = pos[0];
    for (int i = 1; i < pos.size(); i++)
    {
        if (pos[i] - lastPlace>=mid)
        {
            studentReqd++;
            lastPlace = pos[i];
            if (studentReqd==s)
            {
                return true;
            }
            
        }
        
    }
    return false;
}

int race(vector<int> &pos, int s){
    int n = pos.size();
    int lo = 1;
    int hi = pos[n - 1] - pos[0];
    int ans = -1;
    while (lo<=hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(canPlaceStudents(pos,s,mid)){
            ans = mid;
            lo = mid + 1;
        }else{
            hi = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> pos;
    while (n--)
    {
        int x;
        cin >> x;
        pos.push_back(x);
    }
    int s;
    cin >> s;
    cout << race(pos, s) << endl;
    return 0;
}