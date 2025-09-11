#include<iostream>
using namespace std;
int main(){
    int cost,money,n;
    cin >>cost>>money>>n;
        // money= initial money,n= number of bananas

    int total = cost*n*(n+1)/2; // TOtal sum
    cout<< max(0, total-money); // if soldier needs more money, print difference
    return 0;
}
