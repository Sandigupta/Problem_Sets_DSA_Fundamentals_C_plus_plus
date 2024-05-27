#include <bits/stdc++.h>
using namespace std;

class YouTubeChannel
{
private:
    string name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVidioTitles;

public:
    YouTubeChannel(string Name, string Owner)
    {
        name = Name;
        OwnerName = Owner;
        SubscribersCount = 0;
    }

    void subscribersCount()
    {
        SubscribersCount++;
    }
    void unsubscribersing()
    {
        if (SubscribersCount > 0)
        {
            SubscribersCount--;
        }
    }

    void publishedVidioTitale(string title)
    {
        PublishedVidioTitles.push_back(title);
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscribers Count: " << SubscribersCount << endl;
        for (auto it : PublishedVidioTitles)
        {
            cout << it << endl;
        }
    }
};

class CockingYouTubeChannel : public YouTubeChannel
{
public:
    CockingYouTubeChannel(string N, string o) : YouTubeChannel(N, o){

                                                       };
};

int main()
{
    YouTubeChannel myChannel("Space", "Sandeep");
    myChannel.subscribersCount();
    myChannel.subscribersCount();
    myChannel.unsubscribersing();
    myChannel.publishedVidioTitale("Hartless");
    myChannel.getInfo();
    CockingYouTubeChannel coockingChannel("Amiy's Cocking channel", "Amiy");
    coockingChannel.getInfo();

    // myChannel.name = "CodeBeauty";
    // myChannel.OwnerName = "Salena";
    // myChannel.SubscribersCount = 1800;
    // myChannel.PublishedVidioTitles = {"C++ for beggginer vedio 1", "HTML & CSS Video 1", "c++ OOP video 1"};

    // cout << "Name=" << myChannel.name << endl;
    // cout << "Owner Name=" << myChannel.OwnerName << endl;
    // cout << "Subscriber Count=" << myChannel.SubscribersCount << endl;
    // for (string it: myChannel.PublishedVidioTitles){
    //     cout << it << endl;
    // }
}