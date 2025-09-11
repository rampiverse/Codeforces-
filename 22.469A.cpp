#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;// n = total number of levels in the game

    vector<int> vis(n + 1, 0); //vector 'vis' of size n+1

    int p;
    cin >> p; // p = number of levels cleared by first player

    // Mark levels cleared by the first player
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        vis[x] = 1; //Mark level x as cleared
    }

    int q;
    cin >> q; // q = number of levels cleared by second player

    // Mark levels cleared by the second player
    for (int i = 0; i < q; i++) {
        int x;
        cin>>x;
        vis[x] = 1; //Mark level x as cleared
    }

    // Check if all levels are cleared
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            cout << "Oh, my keyboard!";
          return 0;
        }
    }

    cout << "I become the guy."; // All levels cleared
    return 0;
}

