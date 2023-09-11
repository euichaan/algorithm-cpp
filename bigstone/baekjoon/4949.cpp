#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1) {
        getline(cin, s);
        if (s==".")break;
        stack<char> st;
        bool isValid = true;
        for (auto e : s) {
            if (e == '[' || e == '(') st.push(e);
            else if (e == ')') {
                if (st.empty() || st.top() != '(') {
                    isValid = false;
                    break;
                }
                st.pop();
            } else if (e == ']') {
                if (st.empty() || st.top() != '[') {
                    isValid = false;
                    break;
                }
                st.pop();
            }
        }
        if(!st.empty()) isValid = false;
        if(isValid) cout << "yes\n";
        else cout << "no\n";
    }
}