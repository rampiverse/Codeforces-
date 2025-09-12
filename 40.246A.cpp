#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;  //Input n=number of elements
    //If n<3, no valid permutation exists
    if(n<3){
        cout<< -1 << endl;
        return 0;
    }
    //Print numbers from n down to 1 → descending order
    //This ensures the sequence is NOT increasing
    for(int i = n; i >= 1; i--){
        // Print the number
        cout<< i;
        // If it's not the last number, print a space
        if(i != 1)
          cout<< " ";
    }
    // End with a new line
    cout<< endl;
    return 0;
}
