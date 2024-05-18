#include <bits/stdc++.h>
using namespace std;

bool isStrfry(string s1, string s2);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        if (isStrfry(s1, s2)) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}

bool isStrfry(string s1, string s2) {
    int arr1[26]={}, arr2[26]={};
    for(auto s: s1) arr1[s-'a']++;
    for(auto s: s2) arr2[s-'a']++;
    return equal(arr1, arr1+26, arr2);
}
