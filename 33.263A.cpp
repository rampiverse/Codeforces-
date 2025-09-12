#include<iostream> //Header file
using namespace std;
int main(){
    int a,x,y; //Declaring variables
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++){
            cin>>a;
            if(a==1){ //Find position of "1" in the matrix
               x=i;y=j;
            }
        }
    cout<<abs(x-3)+abs(y-3)<<endl; //moves to bring 1 in the center
  return 0;
}
