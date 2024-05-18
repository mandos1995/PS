#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n], x, ans=0;
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> x;
    bool check[2000001]={false,};
    
    for(int i=0; i<n; i++) {
        if (x-arr[i]>0 && check[x -arr[i]]) ans++;
        check[arr[i]]=true;
    }
    cout << ans;
}
