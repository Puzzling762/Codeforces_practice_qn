#include<iostream>
#include<stack>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    stack<int> st;
    int max_x = 0;
    
    
    for (int i = 0; i < n; i++) {
        
        while (!st.empty() && st.top() < arr[i]) {
            int x = st.top() ^ arr[i];
            max_x = max(max_x, x);
            st.pop();
        }
        
        if (!st.empty()) {
            int x = st.top() ^ arr[i];
            max_x = max(max_x, x);
        }
        st.push(arr[i]);
    }
    
    cout << max_x;
    return 0;
}
