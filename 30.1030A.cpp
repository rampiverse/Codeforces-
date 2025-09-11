#include<iostream>
using namespace std;
int main(){
    int n; // number of problems
    cin >> n;
    int x;
    bool hardFound = false; // flag to check if any problem is hard
    for(int i = 0; i < n; i++){
        cin >> x; // 1 = hard, 0 = easy
        if (x == 1){
           hardFound = true; // mark hard problem found
       }
   }
    // Print outcome based on presence of hard problem
        if (hardFound)
          cout << "HARD";
        else
          cout << "EASY";
      return 0;
}
