#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c && a == c) {
        cout << a * 1000 + 10000;
    } else if (a == b || a == c) {
        cout << a * 100 + 1000;
    } else if (b == c) {
        cout << b * 100 + 1000;
    } else {
        cout << max({a, b, c}) * 100;
    }
}
