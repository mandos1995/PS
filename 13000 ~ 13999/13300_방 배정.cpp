#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, m[7]={}, w[7]={};
    cin >> n >> k;
    for(int i=0; i<n; i++) {
        int s, y;
        cin >> s >> y;
        if (s==0) {
            w[y]++;
        } else {
            m[y]++;
        }
    }
    int m_count=0, w_count=0;
    for(int i=1; i<7; i++) {
        m_count += m[i] % k == 0 ? m[i]/k : m[i]/k+1;
        w_count += w[i] % k == 0 ? w[i]/k : w[i]/k+1;
    }
    cout << m_count + w_count;
}
