#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string word;
    int arr[26];
    fill_n(arr, 26, -1);
    cin >> word;
    
    for(int i=0; i<int(word.size()); i++)
        if (arr[int(word[i])-'a'] == -1) arr[int(word[i])-'a'] = i;
    for(int i=0; i<26; i++) cout << arr[i] << " ";
}
