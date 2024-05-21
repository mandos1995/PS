#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int index = 0;
    for(int i=0; i<n; i++) v.push_back(i+1);
    cout << "<";
    while(!v.empty()) {
        index+=(k-1);
        index%=v.size();
        cout << (v[index]);
        v.erase(v.begin()+index);
        if(!v.empty()) cout << ", ";
        
    }
    cout << ">";
}
