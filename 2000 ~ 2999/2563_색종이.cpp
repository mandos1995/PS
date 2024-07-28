#include <bits/stdc++.h>
using namespace std;

bool arr[101][101];

void fill_square(int y, int x);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, answer=0;
    cin >> n;
    while(n--) {
        int y, x;
        cin >> y >> x;
        fill_square(y, x);
    }
    
    for(int y=0; y<101; y++)
        for(int x=0; x<101; x++)
            if (arr[y][x]) answer++;
    cout << answer;
}

void fill_square(int y, int x) {
    for(int yy=y; yy<y+10; yy++) {
        for(int xx=x; xx<x+10; xx++) {
            arr[yy][xx] = true;
        }
    }
}
