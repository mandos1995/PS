#include <bits/stdc++.h>
using namespace std;

bool check_vps(string s);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if (check_vps(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}

bool check_vps(string s) {
    stack<char> S;
    
    for(char s: s) {
        if (S.empty()) {
            S.push(s);
            continue;;
        }
        
        if (s == ')' && S.top() == '(') {
            S.pop();
        } else {
            S.push(s);
        }
    }
    
    return S.empty();
}
