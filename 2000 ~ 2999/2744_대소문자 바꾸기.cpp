#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(auto s: s)
        if (s >= 'A' && s <= 'Z') cout << (char)tolower(s);
        else cout << (char)toupper(s);
}
