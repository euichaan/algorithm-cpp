#include <bits/stdc++.h>
using namespace std;

// A를 B번 곱한 수를 알고 싶다.
// 이를 C로 나눈 나머지를 구하는 프로그램
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b) {
    if (b == 1) return a % c;
    ll ret = go(a, b / 2);
    ret = (ret * ret) % c;
    if (b % 2) ret = (ret * a) % c;
    return ret;
}

int main() {
    cin >> a >> b >> c;
    cout << go(a, b) << '\n';
    return 0;
}