#include<iostream>
#include<string>
using namespace std;

void find_first_seco(string s, int *indx1, int *indx2){
    for (int i = 0; i < s.size(); i++)
    {   
        int maxind = -1;
        int minind = s.size();
        if(s[i]=='a'){
            if(i<minind){
                minind = i;
                *indx1 = minind;
            }
            else if(i>maxind){
                maxind = i;
                *indx2 = maxind;
            }
        }
        
       

    }
    
}

int main(){
    string s;
    cin >> s;

    int first_index;
    int second_index;
    find_first_seco(s, &first_index, &second_index);
    cout << first_index << " " << second_index << endl;
}