#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[n];
    fill_n(arr, n, 0);
    for(int i=0; i<m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        for(int j=a-1; j<b; j++) {
            arr[j] = c;
        }
    }
    for(auto element: arr)
        cout << element << " ";
}
