#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int dollCollection[n];
	    for(int i=0;i<n;i++){
	        cin>>dollCollection[i];
	    }
	    int missing_doll_pair=0;
	    for(int i=0;i<n;i++){
	        missing_doll_pair^=dollCollection[i];
	    }
	    cout<<missing_doll_pair;
	}
	return 0;
}
