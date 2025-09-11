#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n; // Number of stops
    int current = 0; // Current number of passengers inside the tram
    int maximum = 0; // Maximum number of passengers at any point in time

    // Loop through all tram stops
    for(int i = 0; i < n; i++){
        int out,in;
        cin >>out>>in;  // Number of passengers going out and in at this stop
        current -= out; //passengers leave the tram
        current += in;  //new passengers enter the tram

        // Update maximum if the current passengers exceed previous maximum
        if (current > maximum)
            maximum = current;
    }
    // After processing all stops
    cout<< maximum << endl;
    return 0;
}
