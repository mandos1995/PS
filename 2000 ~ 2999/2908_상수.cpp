#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string n1, n2;
    cin >> n1 >> n2;
    reverse(n1.begin(), n1.end()); reverse(n2.begin(), n2.end());
    if (stoi(n1)>stoi(n2)) cout << n1;
    else cout << n2;
}
