#include <bits/stdc++.h>
using namespace std;
// 연속적인 며칠 동안의 온도의 합이 가장 큰 값
int n, k, temp, psum[100004], ret = -10000004;
// n은 온도를 측정한 전체 날짜의 수, k는 합을 구하기 위한 연속적인 날짜의 수  2 <= N <= 100,000 1 <= K <= N - 1
// 온도는 -100 ~ 100
// 구간합: prefix sum psum[i] = psum[i - 1] + a[i]; psum[c] - psum[b - 1];
// 최솟값: -100 * 10만번 >> -1000만
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    for (int i = k; i <= n; i++) {
        ret = max(ret, psum[i] - psum[i - k]);
    }
    cout << ret;
    return 0;
}