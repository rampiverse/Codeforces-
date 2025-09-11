#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >>n;  //Input the number of test cases
    while(n--){ //Process each word one by one
        string s;
        cin >> s; //Input a single word

          //If the word's length is greater than 10
        if(s.length()>10){
             cout << s[0]<< s.length() - 2<< s[s.length() - 1] //Print first character,count of middle characters, last character

                 cout<< "\n"; // New line for next output     }
        else
          {
            cout << s << "\n"; //Print the words as it is
        }
    }

    return 0;
}
