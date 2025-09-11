#include <iostream>
using namespace std;

int main(){
    int n; //Number of goals
    cin>>n;
    string team1, team2;
    int count1 =0, count2 =0; //counters for goals

    for (int i =0; i < n; i++){
        string s;
        cin >> s;
        if (i == 0){ //For first goal
            team1 = s;
            count1++;
        }
        else if(s == team1){
            count1++;
        }
        else{
            team2 = s;
            count2++;
        }
    }

    if (count1>count2) // Team with more goals
     cout << team1<<endl;
    else
     cout << team2<<endl;
    return 0;
}
