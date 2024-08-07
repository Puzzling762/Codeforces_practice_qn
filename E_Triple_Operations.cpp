#include <iostream>
using namespace std;

// Function to calculate the number of operations to reduce x to 0
int calculateOperations(int x) {
    int operations = 0;
    while (x > 0) {
        x /= 3;
        operations++;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        int maxOperations = max(calculateOperations(l), calculateOperations(r));
        
        cout << maxOperations << endl;
    }
    
    return 0;
}
