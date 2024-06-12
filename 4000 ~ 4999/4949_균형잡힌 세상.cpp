#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<char> sets = {'(', '[', ')', ']'};
    string s;
    while (getline(cin, s)) {
        if (s==".") break;
        stack<char> S;
        for(auto s: s) {
            if (sets.find(s) == sets.end()) continue;;
            
            if (!S.empty() && S.top()=='(' && s==')') S.pop();
            else if (!S.empty() && S.top()=='[' && s==']') S.pop();
            else S.push(s);
        }
        
        if (S.empty()) cout << "yes\n";
        else cout << "no\n";
    }
}
