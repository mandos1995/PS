#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    stack<int> S ;
    cin >> k;
    while(k--) {
        int n;
        cin >> n;
        if(n==0) S.pop();
        else S.push(n);
    }
    int total=0;
    while(!S.empty()) {
        total += S.top();
        S.pop();
    }
    cout << total;
}
