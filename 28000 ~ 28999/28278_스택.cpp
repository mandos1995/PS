#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> S;
    while(n--) {
        int x;
        cin >> x;
        switch (x) {
            case 1:
                int value;
                cin >> value;
                S.push(value);
                break;
            case 2:
                if (!S.empty()) {
                    cout << S.top() << "\n";
                    S.pop();
                } else cout << "-1\n";
                break;
            case 3:
                cout << S.size() << "\n";
                break;
            case 4:
                cout << S.empty() << "\n";
                break;
            case 5:
                if (!S.empty()) cout << S.top() << "\n";
                else cout << "-1\n";
                break;
        }
    }
}
