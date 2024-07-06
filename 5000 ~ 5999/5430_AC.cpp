#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string p, x;
        int n;
        cin >> p >> n >> x;
        deque<int> DQ;
        
        string item;
        
        x.erase(x.begin());
        x.pop_back();
        stringstream ss(x);
        
        while (getline(ss, item, ',')) {
            DQ.push_back(stoi(item));
        }
        
        bool rotate = false;
        bool isError = false;
        
        for(auto cmd: p) {
            if (cmd == 'R') {
                rotate = !rotate;
            } else {
                if (DQ.empty()) {
                    isError = true;
                    break;
                }
                
                if (!rotate) {
                    DQ.pop_front();
                } else {
                    DQ.pop_back();
                }
            }
        }
        
        if (isError) {
            cout << "error";
        } else {
            if (rotate) reverse(DQ.rbegin(), DQ.rend());
            cout << "[";
            for(size_t i=0; i<DQ.size(); i++) {
                cout << DQ[i];
                if (i != DQ.size() - 1) {
                    cout << ",";
                }
            }
            cout << "]";
        }
        cout << "\n";
    }
}
