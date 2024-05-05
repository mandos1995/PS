#include <bits/stdc++.h>
using namespace std;

int get_sum(int a, int b);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i ++) {
        int a, b;
        cin >> a >> b;
        cout << get_sum(a, b) << "\n";
    }
}

int get_sum(int a, int b) {
    return a + b;
}
