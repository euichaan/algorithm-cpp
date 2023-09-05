#include <bits/stdc++.h>
using namespace std;
// 갑옷은 두 개의 재료로 만드는데 두 재료의 고유한 번호를 합쳐서 M(1 <= M <= 10,000,000)이 되면 갑옷이 된다.
// N개의 재료(1 <= N <= 15,000)와 M이 주어졌을 때 몇 개의 갑옷을 만들 수 있는지 구하는 프로그램을 작성하시오.
int n, m, a[15004],ret;
bool mark[10000004];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n; // 재료의 개수
    cin >> m; // 갑옷을 만드는데 필요한 수
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (m - a[i] < 0) continue;
        if (mark[m - a[i]]) ret++;
        mark[a[i]] = 1;
    }
    cout << ret;
}
