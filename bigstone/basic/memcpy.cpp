#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * memcpy(): Array 끼리 복사할 때 사용
 * copy(): Array, vector에 모두 쓰임
 *
 * 얕은 복사는 메모리 주소값을 복사한 것이라 복사한 배열을 수정하면 원본 배열이 수정되는 복사방법
 * 깊은 복사는 새로운 메모리 공간을 확보해 완전히 복사해 복사한 배열을 수정하면 원본 배열은 수정되지 않는 복사방법
 */
int a[5], temp[5];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v[3] = {1, 2, 3};
    int ret[3];
    memcpy(ret, v, sizeof(v)); // v라는 Array를 ret에 복사(깊은 복사)
    cout << ret[1] << '\n';
    ret[1] = 100;
    cout << ret[1] << '\n';
    cout << v[1] << '\n';

    // temp라는 배열에 a를 담아두고 a를 수정하는 로직을 구현한 뒤
    // a라는 배열에 다시 예전 온전한 a를 담은 temp를 이용해 다시 a를 만드는 모습.
    for (int i = 0; i < 5; i++) a[i] = i;
    memcpy(temp, a, sizeof(a));
    for (int i : temp) cout << i << ' ';
    cout << '\n';

    a[4] = 1000;
    for (int i : a) cout << i << ' ';
    cout << '\n';

    memcpy(a, temp, sizeof(temp));
    for (int i : a) cout << i << ' ';

    if (is_trivial<vector<int>>()) cout << "Hello";
    return 0;
}