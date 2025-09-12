#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b; //equal length binary strings
    string out;
    out.reserve(a.size());
    for(size_t i=0; i< a.size(); ++i){
        // If characters differ '1' or'0'
        if (a[i]==b[i])
          out.push_back('0');
        else
          out.push_back('1');
    }
    cout <<out<<'\n';
    return 0;
}
