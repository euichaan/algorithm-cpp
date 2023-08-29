#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * memcpy()와 똑같은 동작을 하는 함수. vector와 Array 모두 쓰일 수 있다. 깊은 복사
 * v: 복사당하는 vector(source) ret: 복사하는 vector(destination)
 * copy(v.begin(), v.end(), ret.begin());
 * 복사하는 vector와 복사당하는 vector의 크기를 맞춰주는 것이 중요하다.
 */
int n = 3;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
    vector<int> v {1, 2, 3};
    vector<int> ret(3);
    copy(v.begin(), v.end(), ret.begin());
    cout << ret[1] << '\n'; // 2
    ret[1] = 100;
    cout << ret[1] << '\n'; // 100
    cout << v[1] << '\n'; // 2
    */

    // 배열
    int v[3] = {1, 2, 3};
    int ret[3];
    copy(v, v + 3, ret);
    cout << ret[1] << '\n';
    ret[1] = 100;
    cout << ret[1] << '\n';
    cout << v[1] << '\n';
    return 0;
}