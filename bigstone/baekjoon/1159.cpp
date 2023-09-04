#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 성의 첫 글자가 같은 선수 5명을 선발하려고 한다.
// 성의 첫 글자가 같은 선수가 5명보다 적다면, 기권
int n, a[26];
string ret;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a[s[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] >= 5) {
            ret += i + 'a';
        }
    }
    if (ret.empty()) cout << "PREDAJA";
    else cout << ret;
}