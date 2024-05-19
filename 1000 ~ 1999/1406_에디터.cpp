#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    list<char> L;
    int m;
    string s;
    cin >> s >> m;
    for(auto s: s) {
        L.push_back(s);
    }
    auto cursor = L.end();
    for(int i=0; i<m; i++) {
        char commnad;
        cin >> commnad;
        switch (commnad) {
            case 'L': if (cursor != L.begin()) cursor--; break;
            case 'D': if (cursor != L.end()) cursor++; break;
            case 'B': if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
            break;
            default:
                char w;
                cin >> w;
                L.insert(cursor, w);
        }
    }
    for(auto i: L) cout << i;
}
