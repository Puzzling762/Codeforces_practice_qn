#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    while (n--)
    {
        int t = 0, k = 0;
        cin >> t >> k;
        if (k == (4 *(t)-2))
        {
            cout <<(k/2)+1<< endl;
        }
        else if(k!=(4 *(t)-2))
        {
            if (k % 2 == 0)
            {
                cout << k / 2 << endl;
            }
            else if ((k % 2 != 0))
            {
                cout << k / 2 + 1 << endl;
            }
        }
    }
    return 0;
}
