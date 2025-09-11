#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; // number of integers
    cin>>n;

    vector<int>a(n);
    int odd=0, even=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2)
          odd++;  // count odd numbers
        else
          even++; // count even numbers
    }

    // Find which index has the unique parity
    for(int i=0;i<n;i++){
        if(odd==1 && a[i]%2)
          cout<<i+1<<endl;
        if(even==1 && a[i]%2==0)
          cout<<i+1<<endl;
    }
    return 0;
}
