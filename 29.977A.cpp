#include<iostream>
using namespace std;
int main(){
    int n,k; //n =number, k =operations
    cin>>n>>k;
    while(k--){
        if(n%10==0)
            n/=10;  // divide if last digit zero
        else
            n--; // otherwise decrement
    }
    cout<<n;
    return 0;
}
