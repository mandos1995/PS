#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)
        arr[i] = i+1;
    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        swap(arr[a-1], arr[b-1]);
    }
    for(auto element: arr) {
        cout << element << " ";
    }
}
