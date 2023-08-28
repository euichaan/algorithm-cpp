#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * string은 reverse()를 제공하지 않아서 STL의 reverse()를 쓰면 된다.
 */
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a ="It's hard to have a sore leg";
    reverse(a.begin(), a.end());
    cout << a << '\n';
    reverse(a.begin(), a.end());
    cout << a << '\n';

    // 시작위치를 바꿔 뒤집고 싶은 부분만을 바꿀 수 있다.
    reverse(a.begin() + 3, a.end());
    cout << a << '\n';
}