#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[26] = {0, };
    string word;
    cin >> word;
    for(auto w: word)
        arr[w-'a'] += 1;
    for(int element: arr)
        cout << element << " ";
}
