#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, v, answer=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cin >> v;
    for(auto element: arr)
        if (element == v)
            answer++;
    cout << answer;
}
