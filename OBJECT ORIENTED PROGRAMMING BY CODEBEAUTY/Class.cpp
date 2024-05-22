#include<bits/stdc++.h>
using namespace std;

class YouTubeChannel{
    public:
    string name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVidioTitles;
};


int main(){
    YouTubeChannel myChannel;
    myChannel.name = "CodeBeauty";
    myChannel.OwnerName = "Salena";
    myChannel.SubscribersCount = 1800;
    myChannel.PublishedVidioTitles = {"C++ for beggginer vedio 1", "HTML & CSS Video 1", "c++ OOP video 1"};

    cout << "Name=" << myChannel.name << endl;
    cout << "Owner Name=" << myChannel.OwnerName << endl;
    cout << "Subscriber Count=" << myChannel.SubscribersCount << endl;
    for (string it: myChannel.PublishedVidioTitles){
        cout << it << endl;
    }
    
    
}