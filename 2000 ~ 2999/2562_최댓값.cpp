#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max_value = -100;
    int x, max_index = 0;
    for(int i=0; i<9; i++) {
        cin >> x;
        if (x > max_value) {
            max_value = x;
            max_index = i + 1;
        }
    }
    cout << max_value << "\n" << max_index;
}
