#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

// typedef <타입> <별칭> : 타입의 이름을 별칭으로 정의 가능
// define <이름> <값> : 상수, 매크로 정의
typedef int i;
#define PI 3.14
#define loop(x,n) for(int x = 0; x < n; x++)
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    i a = 1;
    cout << a << '\n'; // 1

    int sum = 0;
    loop(i, 10) {
        sum += i;
    }
    cout << sum << '\n'; // 45
    return 0;
}