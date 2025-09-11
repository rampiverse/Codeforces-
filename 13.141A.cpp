#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a,b,c;// a = first friend's letters
    // b = second friend's letters
    // c = letters on the card
    cin >>a>>b>>c;
    vector<int>letters(26,0); //A vector letters size of 26 and initialize all to 0
    // count letters in a and b
    for(char ch : a)
          letters[ch-'A']++; //Count letters from first friend
    for(char ch : b)
          letters[ch-'A']++; //Count letters from 2nd friend
    // subtract letters of c
    for (char ch:c)letters[ch -'A']--; // subtract letters of c
    for (int f : letters){ // CHeck if letter count is not zero
        if(f != 0){
          cout <<"NO";
            return 0;
        }
    }
    cout << "YES"; //letters matched
    return 0;
}
