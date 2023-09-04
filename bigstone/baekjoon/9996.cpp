#include <bits/stdc++.h>
using namespace std;
int n;
string ori_s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin >> ori_s;
    int pos = ori_s.find("*");
    string pre = ori_s.substr(0, pos);
    string suf = ori_s.substr(pos + 1); // 시작 위치부터 끝까지
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (pre.size() + suf.size() > s.size()) {
            cout << "NE" << '\n';
        } else {
            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout << "DA" << '\n';
            else cout << "NE" << '\n';
        }
    }
    return 0;
}