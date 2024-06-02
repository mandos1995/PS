#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count[26] = {0, };
    string s;
    cin >> s;
    for(auto s: s) {
        s = toupper(s);
        count[s-'A']++;
    }
    int max_value = 0;
    int answer = 0;
    bool flag = false;
    for(int i=0; i<26; i++) {
        if (count[i] > max_value) {
            max_value = count[i];
            answer = i;
            flag = true;
        }
        else if (count[i] == max_value) flag = false;
    }
    
    if (flag) cout << char('A'+answer);
    else cout << "?";
}
