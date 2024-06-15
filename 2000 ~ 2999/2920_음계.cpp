#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int asc=0, des=0;
    for(int i=0; i<8; i++) {
        int n;
        cin >> n;
        if (n == i + 1) asc++;
        else if (n == (8-i)) des++;
    }
    if (asc == 8) cout << "ascending";
    else if (des == 8) cout << "descending";
    else cout << "mixed";
}
