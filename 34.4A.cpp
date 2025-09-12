#include<iostream>
using namespace std;
int main(){
    int w; //declaring variables to store wieight
    cin>>w; // Read weight of watermelon from the user
    // A watermelon can be divided into 2 even parts
    if (w>2 && w%2==0){ // if weight>2 or weight is even
     cout << "YES"<<endl;
    }
    else{
    cout << "NO"<<endl;
    }
    return 0;

  }
