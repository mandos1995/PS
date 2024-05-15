#include <bits/stdc++.h>
using namespace std;

int total, input;
int min_value=INT_MAX;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<7;i++) {
        cin >> input;
        if (input & 1) {
            total += input;
            min_value = min(min_value, input);
        }
    }
    if(total==0) { cout << "-1"; }
    else { cout << total << "\n" << min_value; }
}
