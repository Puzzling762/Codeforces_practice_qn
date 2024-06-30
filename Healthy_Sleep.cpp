#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    if (n < 8)
    {
        cout << "LESS";
    }
    else if (n > 8)
    {
        cout << "MORE";
    }
    else if (n == 8)
    {
        cout << "PERFECT";
    }

    return 0;
}