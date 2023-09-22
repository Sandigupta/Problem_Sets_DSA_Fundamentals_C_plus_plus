// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;

//     vector<int> v(n);

   

//     int l,r;
//     cout<<"Enter the range of update:";
//     cin>>l,r;
    
//      int q;
//     cout<<"Enter the number of updates:";
//     cin>>q;
    
//    while (q--)
//    {
//     int l,r,e;
//     cout<<"Enter the  range:"<<endl;
//     cin>>l>>r;
//     cout << "Enter the updated value:";
//     cin >> e;

//     for (int i = l-1; i < r; i++)
//     { 
//         int a=v[i];
//      v.push_back(v[i]+e );
//    }
  
  
     
//    }
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }

// }

// // 5 3
// // 1 3 2
// // 2 4 1
// // 4 5 3





#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n, 0);

    int q;
    cout << "Enter the number of updates: ";
    cin >> q;

    while (q--) {  // Use a loop to perform 'q' updates
        int l, r, e;
        cout << "Enter the range of update (l r) and updated value (e): ";
        cin >> l >> r >> e;

        // Update the array efficiently without a loop
        v[l - 1] += e;  // Add 'e' to the element at index 'l-1'
        if (r < n) {
            v[r] -= e;  // Subtract 'e' from the element at index 'r' (if it's within bounds)
        }
    }

    // Compute the prefix sum to get the final array
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }

    cout << "Final array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
