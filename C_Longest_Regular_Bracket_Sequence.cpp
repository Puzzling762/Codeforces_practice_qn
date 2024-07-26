#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int pairs = 0;
    int d=0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
                pairs++;
            }
        }
        else if(st.empty()){
            d++;
        }
    }

    if (pairs == 0)
    {
        cout << 0 << " " << 1 << endl;
    }
    else
    {
        cout << pairs << " " << d << endl;
    }

    return 0;
}
