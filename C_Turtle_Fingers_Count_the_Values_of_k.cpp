#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    while (n--)
    {
        int ans = 0;
        int a = 0, b = 0, l = 0;
        int x = 1, y = 1;
        cin >> a >> b >> l;
        int a1 = a, b1 = b;
        while (l > a)
        {
            if (l % a == 0)
            {
                x++;
            }
            else
            {
                break;
            }
            a = a * a1;
            // cout<<a<<" ";
        }
        while (l > b)
        {
            if (l % b == 0)
            {
                y++;
            }
            else
            {
                break;
            }
            b = b1 * b;
            // cout<<b<<" ";
        }
        for (int i = 0; i <= x; i++)
        {
            for (int j = 0; j <= y; j++)
            {
                long long temp = pow(a1, i) * pow(b1, j);
                if (temp <= l && l % temp == 0)
                {
                    cout << temp << " ";
                    ans = l / temp;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
