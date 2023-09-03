#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 영어 알파벳을 13글짜씩 밀어서 만든다.
// 알파벳 대문자와 소문자에만 적용할 수 있다.
// A 65 Z 90 a 97 z 122
string s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    getline(cin, s);
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= 65 && s[i] < 97) { // 대문자
            if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        } else if (s[i] >= 97 && s[i] <= 122) { // 소문자
            if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }
        cout << s[i];
    }
    return 0;
}