#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max_value = -1;
    pair<int, int> position;
    for(int i=1; i<10; i++) {
        for(int j=1; j<10; j++) {
            int n;
            cin >> n;
            if (max_value < n) {
                max_value = n;
                position.first = i;
                position.second = j;
            }
                
        }
    }
    cout << max_value << "\n" << position.first << " " << position.second;
}
