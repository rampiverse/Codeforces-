#include<iostream> //Header file
using namespace std;
int main() {
    int m,n,maximum;
    cin >>m>>n; //Dimentions of board
    maximum =(m*n)/2; //max dominos =(total squares)/2
    cout <<maximum<<endl;
    return 0;
}
