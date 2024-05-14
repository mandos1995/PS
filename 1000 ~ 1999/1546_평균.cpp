#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double n;
    cin >> n;
    double arr[int(n)];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    double maxValue = *max_element(arr, arr + int(n));
    double total=0;
    
    for(auto element: arr) {
        total += element/maxValue * 100;
    }
    cout << total/n;
}
