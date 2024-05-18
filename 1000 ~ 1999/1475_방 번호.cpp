#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, arr[10]={};
    cin >> n;
    while (n!=0) {
        int r = n%10;
        if (r==6 || r==9) {
            if (arr[6] > arr[9]) arr[9]++;
            else arr[6]++;
        } else {
            arr[r]++;
        }
        n/=10;
    }
    cout << *max_element(arr, arr + 10);
}
