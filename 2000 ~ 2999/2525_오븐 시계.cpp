#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, m, p, time = 0;
    cin >> h >> m >> p;
    time += h * 60 + m + p;
    time %= 1440;
    cout << time / 60 << " " << time % 60;
}
