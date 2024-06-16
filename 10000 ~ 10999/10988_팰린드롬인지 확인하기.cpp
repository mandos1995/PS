#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string w;
    cin >> w;
    bool isPalindrome = true;
    int n = (int)w.size();
    for(int i=0; i<n/2; i++) {
        if (w[i] != w[n-1-i]) {
            isPalindrome = false;
            break;
        }
    }
    cout << isPalindrome;
}
