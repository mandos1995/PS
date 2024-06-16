#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string w;
    cin >> w;
    string words[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    for(auto word: words) {
        w = regex_replace(w, regex(word), " ");
    }
    cout << w.size();
}
