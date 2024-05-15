#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[5], total=0, input;
    for(int i=0; i<5; i++) {
        cin >> input;
        arr[i] = input;
        total += input;
    }
    sort(arr, arr + 5);
    cout << total / 5 << "\n";
    cout << arr[2];
}
