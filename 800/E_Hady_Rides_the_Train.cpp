
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = n / 4;
    int col = n % 4;

    if (row % 2 != 0) {
        col = 3 - col;
    }

    cout << row << " " << col << endl;

    return 0;
}
