#include<iostream> //header file
using namespace std;
int main()
{
     int n; //Declaring variables
     cin>> n;// Number of problems to consider
     int count = 0;// Counter for problems that can be solved by at least two friends
     // Loop through each problem
     for(int i = 0; i<n ;i++)
     {
          int a, b,c;
          cin>>a>>b>>c; //Variables representing if each friend knows the solution (1 = knows, 0 = doesn't)
          // If at least two friends know the solution, increment count
          if( a+b+c>=2)
               count++;
     }
     cout<<count<<endl; //the total number of problems
     return 0;
}
