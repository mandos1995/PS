#include <bits/stdc++.h>
using namespace std;

int get_sum(int a, int b);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << get_sum(a, b) << "\n";
    }
}

int get_sum(int a, int b) {
    return a + b;
}
