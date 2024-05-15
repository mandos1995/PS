#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[9], total=0;
    for(int i=0; i<9; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr, arr+9);
    total -= 100;
    for(int i=0; i<9; i++) {
        for(int j=i+1; j<9; j++) {
            if (arr[i] + arr[j] == total) {
                for(int element: arr) {
                    if (element == arr[i] || element == arr[j]) {
                        continue;
                    }
                    cout << element << "\n";
                }
                return 0;
            }
        }
    }
}
