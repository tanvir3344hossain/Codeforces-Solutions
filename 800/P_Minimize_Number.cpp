
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        int count = 0;

        while (x % 2 == 0)
        {
            count++;
            x /= 2;
        }

        ans = min(ans, count);
    }

    cout << ans << endl;

    return 0;
}
