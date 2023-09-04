#include <bits/stdc++.h>
using namespace std;
int n, ret;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        stack<char> st;
        for (auto e : s) {
            if (!st.empty() && st.top() == e) st.pop();
            else st.push(e);
        }
        if (st.empty()) ret++;
    }
    cout << ret;
    return 0;
}