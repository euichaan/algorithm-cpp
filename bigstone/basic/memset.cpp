#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * memset(배열의 이름, k, 배열의 크기)
 * 0, -1 이외의 숫자는 절대 이 memset()으로 초기화할 수 없다.
 * int a[5] = {0, }; 이 코드는 정적초기화만 유효. 동적초기화로써는 동작하지 않는다.
 */
const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(a, -1, sizeof(a));
    memset(a2, 0, sizeof(a2));
    for (int i = 0; i < 10; i++) cout << a[i] << " ";
    return 0;
}