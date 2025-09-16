#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;  //Number of events
    int police =0; //Current available police officers
    int untreated = 0;  //Crimes that could not be handled
    for(int i=0; i<n; i++){
        int x;
        cin>>x; //x= -1(crime) or x>0 (new police)
        if(x == -1){  // Crime occurred
            if (police >0)  //If police available
                police--;  //Assign one to handle crime
            else
                untreated++; //No police → crime untreated
        } else {
            police += x; //New police recruited
        }
    }

    cout << untreated << endl; // Total untreated crimes
    return 0;
}
