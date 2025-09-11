#include <iostream>
using namespace std;
int main() {
int a, b; //Declaring variables
cin >> a >> b; // weights of Limak and Bob
int years = 0; // count years
// Each year: Limak triples weight, Bob doubles weight
while (a <= b) {
a *= 3;
b *= 2;
years++; // increase year count
}
cout << years; // print number of years until Limak > Bob
return 0;
}
