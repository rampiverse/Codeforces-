#include<iostream>
#include<map>
#include<cctype> //for tolower()
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>freq;
    for (char c : s) {
        freq[tolower(c)] = 1; // convert to lowercase and mark present
    }
    // If map size = 26, all letters present
    if (freq.size() == 26)
        cout <<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
