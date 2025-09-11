#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int removeCount = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            removeCount++;
    }
    cout << removeCount;
    return 0;
}
