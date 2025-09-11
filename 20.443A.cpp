#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    getline(cin, s); // read the whole line including spaces
    map<char,int> freq; // map to count each character's frequency
    for (char c : s){
        if (c >= 'a' && c <= 'z'){
            freq[c]=1; // mark this letter as present
        }
    }
    // The size of map = number of unique letters
    cout << freq.size();
    return 0;
}
