#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;  // Input n = number of elements in the permutation
    // If n is odd, we cannot form perfect pairs
    if(n%2!= 0){
        cout << -1 << endl;  // Impossible case
        return 0;
    }
    //For even n, create pairs like (2,1), (4,3), (6,5), ...
    for(int i = 1; i <= n; i += 2) {
        // Print i+1 first, then i
        // So 1 2 becomes 2 1, 3 4 becomes 4 3, etc.
        cout << i + 1 << " " << i << " ";
    }
    cout<< endl; // New line after printing permutation
    return 0;
}

