#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //Number of polyhedrons
    int faces = 0; //Total number of faces
    while(n--){
        string poly;
        cin>>poly; //Read polyhedron name
        //Add corresponding faces based on shape
        if(poly == "Tetrahedron")
          faces += 4;
        else if(poly == "Cube")
          faces += 6;
        else if(poly == "Octahedron")
          faces += 8;
        else if(poly == "Dodecahedron")
          faces += 12;
        else if(poly == "Icosahedron")
           faces += 20;
    }
    cout<<faces<<endl; //Total faces of all polyhedrons
    return 0;
}
