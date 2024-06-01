#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<pair<int, int>> S;
    S.push({100000001, 0});
    for(int i=1; i<=n; i++) {
        int height;
        cin >> height;
        while(S.top().first < height) {
            S.pop();
        }
        cout << S.top().second << " ";
        S.push({height, i});
    }
}
