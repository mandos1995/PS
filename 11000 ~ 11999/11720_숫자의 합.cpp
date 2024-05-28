#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, total=0;
    string s;
    cin >> n;
    cin >> s;
    for(auto num: s) {
        total += num - '0';
    }
    cout << total;
}
