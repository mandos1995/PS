#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    
    while(t--) {
        list<char> L;
        auto cursor = L.begin();
        string s;
        cin >> s;
        for(auto s: s) {
            if (s=='<') {
                if (cursor != L.begin()) cursor--;
            } else if (s=='>') {
                if (cursor != L.end()) cursor++;
            } else if (s=='-') {
                if (cursor != L.begin()) {
                    cursor = L.erase(--cursor);
                }
            } else {
                L.insert(cursor, s);
            }
        }
        for(auto i: L) cout << i;
        cout << "\n";
    }
}
