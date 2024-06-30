#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases--) {
        int num_elements;
        cin >> num_elements;

        int a[num_elements];
        int ans = 0;

        for(int i = 0; i < num_elements; i++) {
            cin >> a[i];
            if (a[i] < 0) {
                a[i] = abs(a[i]); 
            }
            ans += a[i];
        }
        
        cout << ans << endl; 
    }

    return 0;
}
