#include <iostream>
using namespace std;

int main(){
    int n; //Declaring variables
    int x = 0; //Declaring variables and initializing
    cin>>n; // Number of operations
    string s;
    while (n--){ // Loop over each operation
        cin>>s; // Read ++X or X--
        if (s[1] == '+'){ // If next character is '+',increment x
               x++;
          }
        else{
          x--; // Otherwise decrement x
        }
     }
    cout << x; // final value of x

return 0;
}
