
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (i % 2 == 0)
        {
            if (x < 0)
                cnt1++;
            else
                cnt2++;
        }
        else
        {
            if (x > 0)
                cnt1++;
            else
                cnt2++;
        }
    }

    cout << min(cnt1, cnt2) << endl;

    return 0;
}
