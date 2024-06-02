#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    int answer[n], nums[n];
    fill_n(answer, n, -1);
    stack<int> S;
    
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        nums[i] = a;
        while(!S.empty() && nums[S.top()] < a) {
            answer[S.top()] = a;
            S.pop();
        }
        S.push(i);
    }
    
    for(int i=0; i<n; i++) cout << answer[i] << " ";
}
