#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    queue<int> Q;
    cin >> n;
    while(n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            Q.push(num);
        } else if (cmd == "pop") {
            if (!Q.empty()) {
                cout << Q.front() << "\n";
                Q.pop();
            } else cout << "-1\n";
        }
        else if (cmd == "size") cout << Q.size() << "\n";
        else if (cmd == "empty") cout << Q.empty() << "\n";
        else if (cmd == "front") {
            if (Q.empty()) cout << "-1\n";
            else cout << Q.front() << "\n";
        } else {
            if (Q.empty()) cout << "-1\n";
            else cout << Q.back() << "\n";
        }
    }
}
