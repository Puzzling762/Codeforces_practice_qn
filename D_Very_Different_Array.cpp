#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a1(n);
        vector<int> a2(m);
        multiset<int>k;

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }

        for (int i = 0; i < m; i++) {
            cin>>a2[i];
        }

        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());

        int ans = 0;

        if (abs(a2[0] - a1[0]) >= abs(a2[m-1] - a1[n-1])) {
            ans += abs(a2[0] - a1[0]);
        } else {
            ans += abs(a2[m-1] - a1[n-1]);
        }

        cout << ans << endl;
    }

    return 0;
}
