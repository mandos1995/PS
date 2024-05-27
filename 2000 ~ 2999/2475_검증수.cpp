#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int total=0;
    for(int i=0; i<5; i++) {
        int n;
        cin >> n;
        total += n*n;
    }
    cout << total%10;
}
