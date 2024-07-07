#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char>S;
    int step=1, answer=0;
    string word;
    cin >> word;
    char prev = '\0';
    for(auto w: word) {
        if (!S.empty() && S.top() == '(' && w == ')') {
            S.pop();
            if (prev == '(') {
                answer += step;
            }
            step /= 2;
        } else if (!S.empty() && S.top() == '[' && w == ']') {
            S.pop();
            if (prev == '[') {
                answer += step;
            }
            step /= 3;
        } else {
            S.push(w);
        }
        
        if (w == '(') {
            step *= 2;
        } else if (w == '[') {
            step *= 3;
        }
        prev = w;
    }
    if (S.empty()) cout << answer;
    else cout << 0;
}
