#include<iostream>
using namespace std;
int main(){
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int normalTime =((n+k-1)/k)*t; //Time with one oven
    int secondStart = d; //When second oven starts
    //Check if second oven helps
    if(secondStart + t < normalTime)
     cout<<"YES\n";
    else
     cout<<"NO\n";
    return 0;
}
