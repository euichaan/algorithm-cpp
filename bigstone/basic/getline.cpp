#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * cin은 개항문자 직전까지 받으므로 한꺼번에 받으려면 getline을 이용한다.
 * T개의 getline을 받을지를 설정하고 T개 만큼 getline의 입력이 들어오는 상황에는
 * 특정 문자열을 기반으로 버퍼플래시를 하고 받아야 한다.
 *
 * cin으로 입력을 받을 때 개행문자 직전까지 입력을 받게 되고 이 때문에 중간에 위치한 \n이 남아있게 된다.
 */
int T;
string s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush);
    for (int i = 0; i < T; i++) {
        getline(cin, s);
        cout << s << '\n';
    }
    return 0;
}