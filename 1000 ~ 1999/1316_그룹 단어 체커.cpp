#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int answer = 0;
    while(n--) {
        string w;
        cin >> w;
        char prev = w.front();
        bool check[26] = {false, };
        bool isSuccess = true;
        for(int i=1; i<(int)w.size(); i++) {
            if (check[w[i] - 'a']) {
                isSuccess = false;
                break;
            }
            
            if (prev != w[i]) {
                check[prev - 'a'] = true;
            }
            prev = w[i];
        }
        answer += isSuccess ? 1 : 0;
    }
    cout << answer;
}
