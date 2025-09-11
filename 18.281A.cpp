#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s; //Input word from the user
    if(s[0]>='a' && s[0]<='z'){//If the first letter is lowercase, convert it to uppercase
        s[0]= s[0]-'a'+'A';
    }
    cout<< s; //Print the final word
    return 0;
}
