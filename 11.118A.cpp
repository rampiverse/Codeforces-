#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s; //Read the input string
    //Convert all characters to lowercase
    for (char &c : s){
        if (c>='A' && c<='Z')
            c = c -'A'+'a';
    }
    //Output each consonant prefixed by '.'
    for (char c : s){
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y')
            cout<<'.'<< c;
    }
    return 0;
}
