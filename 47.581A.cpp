#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b; //Read number of red socks a and blue socks b
    int diff =min(a,b);//The number of days he can wear DIFFERENT colored socks is minimum of a and b
    //After wearing diff pairs remaining socks is max(a,b)-diff
    //Two same colored socks can be worn each day → divide by 2
    int same =(max(a,b)-diff)/2;
    //Print different-colored days and same-colored days
    cout<<diff<<" "<<same;
    return 0;
}
