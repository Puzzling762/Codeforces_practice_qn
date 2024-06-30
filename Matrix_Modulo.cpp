// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=0;
//     while (n--)
//     {
//         int t=0;
//         int flag=0;
//         cin>>t;
//         int t1=t*t;
//         int a[t][t];
//         for(int i=0;i<t;i++){
//             for(int j=0;j<t;j++){
//                 cin>>a[i][j];
//             }
//         }
//         for(int i=0;i<t;i++){
//             for(int j=0;j<t;j++){

//                 if((1<=a[i][j])&&(a[i][j]<=t1)){
//                     flag=0;
//                 }
//                 else{
//                     flag=1;
//                     break;
//                 }
//                 if(flag==0){
//                     if((a[i][j]%k==a[j][i]%k)){
//                         cout<<k<<endl;
//                         break;
//                     }
//                     else{
//                         k++;
//                     }
//                 }
//             }
//         }
//     }
    
//     return 0; 
// }
#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        int max_K = 0;
        for (int i = 1; i * i <= 4 * N * N; ++i) {
            if (i * i <= 2 * N * N)
                max_K = i;
        }
        
        int A[N][N];
        set<int> elements;
        bool has_repeated = false;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
                if (elements.find(A[i][j]) != elements.end()) {
                    has_repeated = true;
                } else {
                    elements.insert(A[i][j]);
                }
            }
        }

        if (has_repeated) {
            cout << "0" << endl;
            continue; // Move to the next test case
        }

        int k = 1;
        bool found = false;
        while (k <= max_K) {
            bool valid = true;
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < N; ++j) {
                    if (!(1 <= A[i][j] && A[i][j] <= N * N)) {
                        valid = false;
                        break;
                    }
                    if ((A[i][j] % k) != (A[j][i] % k)) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) break;
            }
            if (valid) {
                cout << k << endl;
                found = true;
                break;
            }
            ++k;
        }
        if (!found) cout << "0" << endl;
    }

    return 0;
}
