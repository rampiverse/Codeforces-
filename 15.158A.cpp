#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k; //number of players, position k
    int a[n];
    for(int i=0; i<n; i++)
     cin>>a[i];
    int score = a[k-1], count=0;
    //count how many have score
    for(int i=0; i<n; i++){
        if (a[i]>=score && a[i]>0)
          count++;
    }
    cout<<count;
    return 0;

}
