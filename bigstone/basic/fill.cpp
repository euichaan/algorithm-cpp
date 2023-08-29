#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * fill은 모든 값으로 초기화 할 수 있다. O(n), [first, last]
 * memSet()은 -1, 0으로만 초기화가 가능하다.
 *
 * fill()은 배열의 전체초기화를 하는 것이 좋다. 순차적으로 1열에 있는 요소들을 초기화하고 그 다음 열 초기화한다.
 * memset(배열의 이름, k, 배열의 크기)
 */
int a[10];
int b[10][10];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(a, a + 10, 100); // 1차원 배열은 다음과 같은 방법이 가능하다.
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    fill(&b[0][0], &b[0][0] + 10 * 10, 2);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }
}