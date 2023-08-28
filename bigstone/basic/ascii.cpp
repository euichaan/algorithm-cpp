#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * 문자열에서 + 하는 연산은 아스키코드를 기반으로 수행됩니다.
 * 문자열을 이루는 문자는 아스키코드 값(0에서 127사이의 정수)으로 저장되어 구현됩니다.
 * 'A' = 65, 'a' = 97, 0 = '48'
 */
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "123";
    s[0]++;
    cout << s << "\n";

    char a = 'a';
    cout << (int)a << '\n'; // 97
    return 0;
}

