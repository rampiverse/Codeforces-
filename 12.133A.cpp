#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s; //Read a string input from the user
    //Loop through each character of the string
    for(int i=0; i<s.size();i++){
        //Check if the current character is H,Q,9
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout<<"YES"<<endl; //If found,print "YES"
            return 0; //Exit the program immediately
        }
    }
    //If none of the characters matched, print "NO"
    cout<<"NO"<<endl;
    return 0;
}
