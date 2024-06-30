// #include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=0;
//     cin>>n;
//     while (n--)
//     {
//         char res[1000];
//         int a=0;
//         cin>>a;
//         itoa(a,res,2);
//         }

//     }
    
//     return 0; 
// }
#include <iostream>
#include <string>
#include <bitset>
#include <cmath>
using namespace std;

int minCostToGoodInteger(long long int N) {
    // Convert N to binary representation
    string binary_N = bitset<30>(N).to_string();
    long long int cost = 0;
    size_t last_pos = binary_N.rfind("101");

    // If N is already a good integer, return 0
    if (last_pos == string::npos) 
        return 0;

    // Iterate to eliminate the last occurrence of "101"
    while (last_pos != string::npos) {
        // Calculate the cost of transforming the sequence after the last "101"
        cost += pow(2, binary_N.length() - last_pos - 3);
        // Update binary_N to remove the last "101" and all the digits after it
        binary_N = binary_N.substr(0, last_pos + 2);
        // Find the position of the last occurrence of "101" in the updated binary_N
        last_pos = binary_N.rfind("101");
    }
    return cost;
}

int main() {
    int T;
    cin >> T; // Input the number of test cases

    for (int i = 0; i < T; ++i) {
        long long int N;
        cin >> N; // Input the integer N for each test case
        // Output the minimum transformation cost for each test case
        cout << minCostToGoodInteger(N) << endl;
    }
    return 0;
}



