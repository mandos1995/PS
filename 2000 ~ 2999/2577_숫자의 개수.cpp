#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a*b*c;
    while (sum != 0) {
        int r = sum % 10;
        arr[r]++;
        sum/=10;
    }
    for(int i=0; i<10; i++) cout << arr[i] << "\n";
}
