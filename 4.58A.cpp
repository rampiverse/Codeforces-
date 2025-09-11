#include <iostream> //Header file
using namespace std;
int main(){
    string s;
    cin>>s; //taking string from the user
    string word = "hello";
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == word[j]){
            j++;
        }
        if(j == word.size()){
            break;
        }
    }
    if(j == word.size())
        cout<<"YES"<< endl;
    else
        cout <<"NO"<< endl;

    return 0;
}
