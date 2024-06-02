#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long answer = 0;
    cin >> n;
    stack<int> S;
    while(n--) {
        int h;
        cin >> h;
        
        while (!S.empty() && S.top() <= h) {
            S.pop();
            if (S.empty()) { break; }
        }
        
        answer += S.size();
        S.push(h);
    }
    cout << answer;
}
