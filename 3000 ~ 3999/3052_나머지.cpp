#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> divisors;
    for(int i=0; i<10; i++) {
        int n;
        cin >> n;
        divisors.insert(n%42);
    }
    cout << divisors.size();
}
