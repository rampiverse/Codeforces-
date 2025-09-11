#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s; //Input string
    int up = 0;
    int low = 0;

    // count uppercase and lowercase
    for(char c:s){
        if(isupper(c))
           up++;
        else
           low++;
    }
    // convert string based on majority
    if(up > low){
        for(char &c:s)c = toupper(c);
    }
    else {
        for(char &c:s)c = tolower(c);
    }
    cout<<s;
    return 0;
}
