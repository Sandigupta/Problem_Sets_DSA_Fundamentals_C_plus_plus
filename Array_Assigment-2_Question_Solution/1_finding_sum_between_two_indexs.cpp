/*Q1 - Given an integer array and two integers L and R. Find the sum of elements between the
index L and index R.
Note: Both L and R inclusive.

Q2 - ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
man starts his trek on point 0 with altitude equal 0. You are given an integer array height
of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
(0 <= i < n). Return the highest altitude of a point.

Q3 - ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
sequence which contains equal numbers of 0 and 1.

Q4 - ​Given an integer array arr, return the number of consecutive sequences(subarrays) with
odd sum.

(Medium)

(Easy)

(Medium)

(Hard)

Assignment Questions

Input:
Output:
Explanation:
Input:
Output:
Explanation:
[1,2,3,4,5] L=1 R=3
9
2+3+4=9
[1,2,3,4,5] L=2 R=2
3
3
*/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int> v;
    cout<<"Enter the elements of vector:";
    for (int i = 0; i < n; i++)
    {
       int ele;
       cin>>ele;
       v.push_back(ele);
    }
    int query;
    cout<<"Enter the number of query:";
    cin>>query;
    while (query)
    {
        int sum=0;
    int l,r;
    cout<<"Enter the intial and final index:";
    cin>>l>>r;
    for (int i = l; i <= r; i++)
    {
        sum+=v[i];
    }
    cout<<"Sum is:"<<sum<<endl;
    query--;
    }
    
    
    
}