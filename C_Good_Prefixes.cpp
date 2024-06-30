#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        long long sum = 0;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            mx = max(mx, a[i]);
            sum += a[i];

            if (mx == (sum - mx)) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
