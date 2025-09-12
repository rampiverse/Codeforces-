#include <iostream>
using namespace std;
int main(){
    int t;// number of test cases
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int pos = -1; // position of first '8'
        for(int i = 0; i < n; i++){
            if (s[i] == '8') {
                pos = i;
                break;
            }
        }
        // valid number needs 11 digits starting with '8'
        if (pos != -1 && n-pos >= 11)
          cout<<"YES\n";
        else
          cout<<"NO\n";
    }
    return 0;
}
