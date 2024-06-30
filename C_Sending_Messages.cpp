#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, f, a, b;
        cin >> n >> f >> a >> b;

        int m[n];
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }

        int d = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            int ans = min((m[i] - d) * a, b);
            if (f - ans <= 0)
            {
                cout << "NO" << endl;
                break;
            }
            d = m[i];
            f -= ans;
        }

        if (i == n) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
