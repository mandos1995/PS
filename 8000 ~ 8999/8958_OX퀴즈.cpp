#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string ox;
        cin >> ox;
        int score=0, count=1;
        for(auto c: ox) {
            if (c=='O') {
                score += count;
                count++;
            } else {
                count=1;
            }
        }
        cout << score << "\n";
    }
}
