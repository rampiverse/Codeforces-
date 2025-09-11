#include<iostream>
#include<vector>
#include<algorithm> // for sort function
using namespace std;
int main(){
    string s;
    cin >>s;
    vector<int>nums; // Store the numbers here
    // Extract numbers from the string
    for(int i=0; i<s.size();i++){
        if (s[i] !='+'){
            nums.push_back(s[i]-'0'); // Convert char to integer
        }
    }
    // Sort numbers in ascending order
    sort(nums.begin(),nums.end());
    // Print numbers with '+' in between
    for(int i=0; i<nums.size();i++){
        cout << nums[i];
        if(i != nums.size()-1)
        cout <<"+"; // No '+' after last number
    }
    return 0;
}
