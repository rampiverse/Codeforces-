#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int>freq; //key = color, value = frequency
    for(int i=0; i<4; i++){
        int color;
        cin>>color;
        freq[color]=1; //mark color as present
    }
    // If there are duplicates
    cout<<4-freq.size();
    return 0;
}
