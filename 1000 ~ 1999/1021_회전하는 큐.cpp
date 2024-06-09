#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    deque<int> DQ;
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++) DQ.push_back(i);
    int count = 0;
    while(m--) {
        int target;
        cin >> target;
        
        int index = find(DQ.begin(), DQ.end(), target) - DQ.begin();
        
        while(DQ.front() != target) {
            if (index < DQ.size() - index) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            } else {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            count++;
        }
        DQ.pop_front();
    }
    cout << count;
}
