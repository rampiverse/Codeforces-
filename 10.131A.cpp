#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;  //Take the input string
    //Convert all uppercase letters in s to lowercase
    for(int i =0; i< s.size(); i++){
        // If character is between A and Z
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] =s[i]-'A' + 'a'; // Convert uppercase to lowercase
        }
    }
    string result = " "; // Start result string with a space
    //Keep only unique characters from 's' into 'result'
    for (int i = 0; i < s.size(); i++) {
        bool found = false;  // Flag to check if character already exists in 'result'
        // Check current character against all characters in 'result'
        for (int j = 0; j < result.size(); j++) {
            if (s[i] == result[j]) { // If already present
                found = true;   // Mark found as true
                break; // No need to check further
            }
        }
        // If character is not found in 'result'add it
        if (!found){
            result += s[i];
        }
    }
    return 0;
}

