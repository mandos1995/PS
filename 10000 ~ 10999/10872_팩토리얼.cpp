#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, answer=1;
    cin >> n;
    for(int i=1; i<=n; i++) answer*=i;
    cout << answer;
}
