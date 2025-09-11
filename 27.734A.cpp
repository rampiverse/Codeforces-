#include <iostream>
using namespace std;
int main(){
    int n; // n = games played,
    string s;//s = string for result
    cin>>n>>s; //TAke input from the user

    int a =0, d =0;
    for(char c : s){
        if(c == 'A')
          a++; // Anton wins
        else
          d++; // Danik wins
    }

    if (a > d)
     cout<<"Anton";
    else if (d > a)
     cout <<
       "Danik";
    else
     cout <<"Friendship"; //Print the statement

  return 0;
}
