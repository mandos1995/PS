#include <bits/stdc++.h>
using namespace std;

void repeatPrint(int r, string s);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int r;
        string s;
        cin >> r >> s;
        repeatPrint(r, s);
        cout << "\n";
    }
}

void repeatPrint(int r, string s) {
    for(char s: s) {
        for(int i=0; i<r; i++) cout << s;
    }
}
