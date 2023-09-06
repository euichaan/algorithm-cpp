#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int t, n;
string a, b; // a: 의상의 이름 b: 의상의 종류
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        map<string, int> mp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            mp[b]++;
            // headgear 2
            // eyewear 1
            // face 3
        }
        long long ret = 1;
        for (auto e : mp) {
            ret *= ((long long)e.second + 1);
        }
        ret--;
        cout << ret << '\n';
    }
}