#include <bits/stdc++.h>
using namespace std;

void reversed_arr(int s, int e);

int arr[21];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1; i<21; i++) arr[i] = i;
    for(int i=0; i<10; i++) {
        int s, e;
        cin >> s >> e;
        reversed_arr(s, e);
    }

    for(int i=1; i<21; i++)
        cout << arr[i] << " ";
}

void reversed_arr(int s, int e) {
    int diff = (e-s+1)/2;
    for(int i=0; i<diff; i++) {
        swap(arr[s+i], arr[e-i]);
    }
}
