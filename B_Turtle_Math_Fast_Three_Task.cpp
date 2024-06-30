#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    while (n--)
    {
        int temp = 0, ans = 0;
        int t = 0;
        cin >> t;
        int a[t];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
            temp += a[i];
        }

        int g = 0;

        if (temp % 3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < t; i++)
            {
                long rem = temp - a[i];
                if (rem % 3 == 0)
                {
                    g = 1;
                    break;
                }
            }

            if (g == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                long rem = temp % 3;
                rem = 3 - rem;
                if (rem < 2)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
    }
    return 0;
}
