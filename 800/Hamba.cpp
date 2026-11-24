#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k, c;
    cin >> n >> k >> c;

    long long int trucks = (n + k - 1) / k;
    long long int cost = trucks * c;

    cout << trucks << " " << cost;

    return 0;
}