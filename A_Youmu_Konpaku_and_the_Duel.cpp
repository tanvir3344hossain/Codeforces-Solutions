
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using i128 = __int128_t;

i128 damage(ll m)
{
    ll y = (2 * m + 3) / 6;
    i128 ans = 0;

    for (ll j = max(0LL, y - 2); j <= min(m, y + 2); j++)
    {
        ll x = m - j;
        i128 d;

        if (j <= x + 1)
            d = (i128)j * (2 * x - j + 3) / 2;
        else
            d = (i128)(x + 1) * (x + 2) / 2 + j - x - 1;

        ans = max(ans, d);
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll h;
        cin >> h;

        ll l = 1, r = 1;

        while (damage(r) < h)
            r *= 2;

        while (l < r)
        {
            ll mid = l + (r - l) / 2;

            if (damage(mid) >= h)
                r = mid;
            else
                l = mid + 1;
        }

        cout << l << '\n';
    }

    return 0;
}
