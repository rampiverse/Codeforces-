#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i= 0; i<n; i++){
        cin >>a[i];
    }
    int maxPos=0,minPos =0; //For maximum position and minimum position
    // Find position of leftmost max and rightmost min
    for(int i = 0;i< n;i++){
        if(a[i] > a[maxPos])
          maxPos = i;
        if(a[i] <= a[minPos])
          minPos = i;
    }
    // Moves = max to front + min to end
    int moves = maxPos +(n -1-minPos);
    if(maxPos>minPos)
       moves--; //overlap fix
    cout << moves; //print the valuE of moves
    return 0;
}
