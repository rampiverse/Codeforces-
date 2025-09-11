#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;  //input string
    int count=0;
     //count digits that are '4'or '7'
    for(char c:s){
        if(c== '4'||c== '7')
          count++;
    }
     // If count itself is 4 or 7
    if(count== 4 ||count==7)
          cout<<"YES"<<endl;
    else
          cout<<"NO"<<endl;
    return 0;
}
