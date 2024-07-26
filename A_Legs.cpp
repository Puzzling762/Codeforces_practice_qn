#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        int t = 0;
        cin >> t;
        int ans = 0;

        if (t < 4) {
            ans = 1;
        } else {
            int rem = t % 4;
            ans = t / 4;
            if (rem > 0) {
                ans += 1; 
            }
        }
        cout << ans << endl;
    }
    return 0;
}
