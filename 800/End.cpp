
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;

    while(left <= right)
    {
        cout << a[left] << " ";
        left++;

        if(left <= right)
        {
            cout << a[right] << " ";
            right--;
        }
    }

    return 0;
}
