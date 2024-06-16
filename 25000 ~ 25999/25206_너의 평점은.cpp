#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 20;
    double total_score = 0, n = 0;
    while(t--) {
        string name, grade;
        double score;
        cin >> name >> score >> grade;
        if (grade == "P") { continue; }
        
        if (grade == "A+") {
            total_score += score * 4.5;
        } else if (grade == "A0") {
            total_score += score * 4.0;
        } else if (grade == "B+") {
            total_score += score * 3.5;
        } else if (grade == "B0") {
            total_score += score * 3.0;
        } else if (grade == "C+") {
            total_score += score * 2.5;
        } else if (grade == "C0") {
            total_score += score * 2.0;
        } else if (grade == "D+") {
            total_score += score * 1.5;
        } else if (grade == "D0") {
            total_score += score * 1.0;
        }
        n += score;
    }
    cout << total_score / n;
}
