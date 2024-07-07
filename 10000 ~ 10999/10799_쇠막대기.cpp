#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char>S;
    string word;
    int answer=0;
    cin >> word;
    char prev=')';
    for(auto w: word) {
        if (!S.empty() && w == ')') {
            S.pop();
            if (prev == '(') answer += (int)S.size();
            else answer++;
        } else {
            S.push(w);
        }
        prev = w;
    }
    cout << answer;
}
