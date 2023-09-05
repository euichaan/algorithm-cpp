#include <bits/stdc++.h>

using namespace std;
string s, ret;
int a[200], flag;
char mid;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    for (auto e: s) a[e]++; // 65부터 + 가 된다.
    for (int i = 'Z'; i >= 'A'; i--) {
        if (a[i]) {
            if (a[i] & 1) { // 홀수 개가 존재한다면
                mid = char(i);
                flag++;
                a[i]--;
            }
            if (flag == 2) break;

            for(int j = 0; j < a[i]; j += 2){
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
    if (flag == 2) cout << "I'm Sorry Hansoo" << '\n';
    else cout << ret << '\n';
    return 0;
}