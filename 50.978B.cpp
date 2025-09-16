#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;//n=length of the string,s=given string
    int count =0;  //Count  letters
    int result =0;  //Count how many deletions we need
    for(char c:s){
        if(c == 'x'){
            count++;  //Another 'x' found, increment count
            if(count>= 3){
                //If we have 3 or more consecutive 'x'
                //We need to delete the extra one
                result++;
            }
        } else {
            // Any character other than 'x' → reset count
            count = 0;
        }
    }
    cout<<result<<endl;// Print total deletions required
    return 0;
}
