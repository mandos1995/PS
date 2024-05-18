#include <bits/stdc++.h>
using namespace std;

bool isStrfry(string s1, string s2);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    int arr1[26]={},arr2[26]={};
    int ans=0;
    cin >> s1 >> s2;
    for(auto s: s1) {
        arr1[s-'a']++;
    }
    for(auto s: s2) {
        arr2[s-'a']++;
    }
    for(int i=0; i<26; i++)
        ans+=abs(arr1[i]-arr2[i]);
    cout << ans;
}
