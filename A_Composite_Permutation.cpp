
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n < 4) {
            cout << -1 << '\n';
            continue;
        }

        if (n % 2 == 0) {
            for (int i = n; i >= 1; i--) {
                cout << i << " ";
            }
        } 
        else {
            cout << n - 1 << " " << n << " " << n - 2 << " ";

            for (int i = 1; i <= n - 3; i++) {
                cout << i << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}
