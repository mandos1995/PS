#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int matrix1[n][m], matrix2[n][m];
    for(int y=0; y<n; y++) for(int x=0; x<m; x++) cin >> matrix1[y][x];
    for(int y=0; y<n; y++) for(int x=0; x<m; x++) cin >> matrix2[y][x];
    for(int y=0; y<n; y++) {
        for(int x=0; x<m; x++) {
            cout << matrix1[y][x] + matrix2[y][x] << " ";
        }
        cout << "\n";
    }
}
