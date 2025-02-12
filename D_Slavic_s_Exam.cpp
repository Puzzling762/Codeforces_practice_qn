#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    if (t.size() > s.size()) {
        cout << "NO" << endl;
        return;
    }

    int j = 0; 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            if (j < t.size()) {
                s[i] = t[j];
                j++;
            } else {
                s[i] = 'a'; 
            }
        } else if (j < t.size() && s[i] == t[j]) {
            j++;
        }
    }

    if (j == t.size()) {
        cout << "YES" << endl;
        cout << s << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}