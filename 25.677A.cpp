#include <iostream>
using namespace std;
int main(){
    int n,h,x;
    int  ans=0;
    cin >>n>> h; //Number of friends and fence height
    while(n--){ //Check height of esch friend
        cin >> x;
        if (x > h)
          ans+=2; // if taller then width is 2
        else
          ans++; // width is 1
    }
    cout << ans;
    return 0;

}
