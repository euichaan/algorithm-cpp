#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

/**
 * 반드시 기저사례를 써야한다(종료조건)
 * 사이클이 있다면 쓰면 안된다. f(a)가 f(b)를 호출한 뒤 다시 f(a)를 호출하는 것
 * 반복문으로 될 거 같으면 반복문으로.
 */
// 1! = 0! = 1
int fact(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fact(n-1);
}

int fibo(int n) {
    cout << "fibo : " << n << '\n';
    if (n == 0 || n == 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int fact1(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}
int n = 4;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << fact(n) << " " << fibo(n) << '\n';
    return 0;
}