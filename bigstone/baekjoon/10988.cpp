#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string s, temp;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 팰린드롬이면 1, 아니면 0을 출력한다.
    cin >> s;
    temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp) cout << 1 << '\n';
    else cout << 0 << '\n';
}