
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int r, c;
    cin >> r >> c;

    r--;
    c--;

    bool ok = true;


    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            
            if(i == 0 && j == 0)
                continue;

            int nr = r + i;
            int nc = c + j;

            
            if(nr >= 0 && nr < n &&
               nc >= 0 && nc < m)
            {
                if(a[nr][nc] != 'x')
                {
                    ok = false;
                }
            }
        }
    }

    if(ok)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
