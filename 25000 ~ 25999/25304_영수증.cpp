#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, n;
    cin >> x >> n;
    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        x -= a * b;
    }
    cout << ((x == 0) ? "Yes" : "No");
}
