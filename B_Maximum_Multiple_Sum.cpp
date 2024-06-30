#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        int ans = 0;
        int max = 0;
        
        for (int i = 2; i <= n; i++)
        {
            int sum = 0;
            for (int j = 1; j * i <= n; j++)
            {
                sum += j * i;
            }
            
            if (sum > max)
            {
                max = sum;
                ans = i;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
