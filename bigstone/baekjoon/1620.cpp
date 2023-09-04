#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;
string s;
map<string, int> mp;
map<int, string> mp2;
string a[100004];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) { // 포켓몬
        cin >> s;
        mp[s] = i + 1;
        mp2[i + 1] = s;
    }
    for (int i = 0; i < m; i++) { // 문제
        cin >> s;
        if (atoi(s.c_str()) == 0) { // 문자
            cout << mp[s] << '\n';
        } else { // 숫자
            cout << mp2[atoi(s.c_str())] << '\n';
        }
    }
}