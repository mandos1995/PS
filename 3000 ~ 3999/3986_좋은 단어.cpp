#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, answer=0;
    cin >> t;
    while(t--) {
        stack<char>S;
        string word;
        cin >> word;
        
        for(auto w: word) {
            if (S.empty()) {
                S.push(w);
                continue;;
            }
            if (w == S.top()) S.pop();
            else S.push(w);
        }
        if (S.empty()) answer++;
    }
    cout << answer;
}
