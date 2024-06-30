// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int solve(int k, vector<int>& a, int n) {
//     // Initialize the list of players
//     vector<int> players(n);
//     for (int i = 0; i < n; i++) {
//         players[i] = i + 1;
//     }

//     // Simulate the game
//     while (true) {
//         // Find the players to remove
//         vector<int> to_remove;
//         for (int i = 0; i < k; i++) {
//             if (a[i] <= players.size()) {
//                 to_remove.push_back(players[a[i] - 1]);
//             }
//         }

//         // Remove the players
//         if (to_remove.empty()) {
//             break;
//         }
//         players.erase(remove_if(players.begin(), players.end(),
//                                [&to_remove](int x) { return find(to_remove.begin(), to_remove.end(), x) != to_remove.end(); }),
//                      players.end());
//     }

//     // Return the number of winners
//     return players.size();
// }

// int main() {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         int k, q;
//         cin >> k >> q;
//         vector<int> a(k);
//         for (int j = 0; j < k; j++) {
//             cin >> a[j];
//         }
//         vector<int> n(q);
//         for (int j = 0; j < q; j++) {
//             cin >> n[j];
//         }
//         cout<<endl;

//         // Solve the problem for each value of n
//         for (int j = 0; j < q; j++) {
//             cout << solve(k, a, n[j])<<" ";
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int s(int k,vector<int>&a,int n){
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i]=i+1;
    }
    while(true){
        vector<int> kick;
        for(int i=0;i<k;i++){
            if(a[i]<=p.size()){
                kick.push_back(p[a[i]-1]);
            }
        }
        if(kick.empty()){
            break;
        }
        for(int i=p.size()-1;i>=0;i--){
            if(find(kick.begin(),kick.end(),p[i])!=kick.end()){
                p.erase(p.begin()+i);
            }
        }
    }
    return p.size();
}
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, q;
        cin >> k >> q;
        vector<int> a(k);
        for (int j = 0; j < k; j++)
        {
            cin >> a[j];
        }
        vector<int> n(q);
        for (int j = 0; j < q; j++)
        {
            cin >> n[j];
        }
        cout << endl;

        for (int j = 0; j < q; j++)
        {
            cout << s(k, a, n[j]) << " ";
        }
    }
    return 0;
}