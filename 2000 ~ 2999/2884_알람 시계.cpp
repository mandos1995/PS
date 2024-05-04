#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, m;
    int time = 1440;
    cin >> h >> m;
    time += h * 60;
    time += m;
    time -= 45;
    time %= 1440;
    cout << time / 60 << " " << time % 60;
}
