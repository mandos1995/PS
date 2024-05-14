#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool check[31] = {false, };
    for(int i=0; i<28; i++) {
        cin >> n;
        check[n] = true;
    }
    for(int i=1; i<=30; i++) {
        if (!check[i]) {
            cout << i << "\n";
        }
    }   
}
