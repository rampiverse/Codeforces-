#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s; // Input Borze code
    string ans; // Store the decoded number
    // i++ always runs at the end of each loop iteration
    for(int i=0; i<(int)s.size();i++){
        if(s[i]=='.'){
            // Single dot = 0
            ans.push_back('0');
        }
        else {
            // Check the next character
            if(s[i + 1] == '.'){
                ans.push_back('1'); //"-." = 1
            } else{
                ans.push_back('2'); //"--" = 2
            }
            i++; // Extra increment since we processed two characters
        }
    }
    cout<<ans <<'\n'; // Output decoded number
    return 0;
}
