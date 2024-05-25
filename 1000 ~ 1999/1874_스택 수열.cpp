#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, element = 1;
    cin >> n;
    stack<int> S;
    string answer = "";
    while(n--) {
        int i;
        cin >> i;
        while (element <= i) {
            S.push(element++);
            answer += "+\n";
        }
        if (S.top() != i) {
            cout << "NO";
            return 0;
        }
        S.pop();
        answer += "-\n";
    }
    cout << answer;
}
