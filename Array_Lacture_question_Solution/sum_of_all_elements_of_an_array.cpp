#incluse<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int j=0; j<5;j++){
        var sum=0;
        sum+=arr[j];
        cout<<sum<<endl;
    }
}