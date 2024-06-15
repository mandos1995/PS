#include <bits/stdc++.h>
using namespace std;

long long my_oper(long long a, long long b);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, b;
    cin >> a >> b;
    cout << my_oper(a, b);
}

long long my_oper(long long a, long long b) {
    return (a+b)*(a-b);
}
