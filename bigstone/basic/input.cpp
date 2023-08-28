#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * cin은 개행문자 직전 까지 입력을 받고
 * scanf는 형식을 지정해서 입력을 받는다. int scanf( const char * format, ... );
 * scanf는 입력형식이 까다롭거나 이를 이용해야할 때 사용. 보통은 cin을 쓰는게 좋다.
 */
int a, b;
double c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // scanf를 이용해서 int타입 2개를 만들어 받을 수 있다.
    scanf("%d.%d", &a, &b);
    printf("\n%d %d\n", a, b);

    scanf("%lf", &c);
    printf("%lf\n", c);
    return 0;
}