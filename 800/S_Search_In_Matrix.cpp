#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == x)
            {
                found = true;
            }
        }
    }

    if(found)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }

    return 0;
}