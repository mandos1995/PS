#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(auto element: arr)
        if (element < x)
            cout << element << " ";
}
