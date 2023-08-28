#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// int를 double로 나누면 double 타입의 결과값이 나오는데 이를 코딩테스트때 신경쓰기는 어렵다.
// vector의 size는 unsigned int를 반환한다.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // good
    vector<int> a = {1, 2, 3};
    cout << (int)a.size() - 10 << '\n';

    // 문자를 숫자로, 숫자를 문자로, X - 'a' or X - 97
    char c = 'a';
    cout << (int)c << '\n'; // 97
    cout << (int)c - 97 << '\n'; // 0
    cout << (int)c - 'a' << '\n'; // 0
    return 0;
}