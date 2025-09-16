#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // n = number of words to write, m = number of pairs

    map<string, string> dict;
    // Store shorter version for each word
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;  // a = original, b = shorter
        // Store shorter of a and b
        dict[a] = (b.length() < a.length() ? b : a);
    }

    // For each word, print the shorter version from dictionary
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        cout << dict[w] << " ";
    }

    return 0;
}
