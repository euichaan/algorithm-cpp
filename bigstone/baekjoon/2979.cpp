#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 한 대: 1분에 한 대당 A원, 두 대: 1분에 한 대당 B원, 세 대: 1분에 한 대당 C원
// A, B, C <= 100
// 시각은 이상 미만이다.
int A, B, C, a[102], ret, d, e;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++) {
        cin >> d >> e; // 도착한 시간, 떠난 시간
        for (int j = d; j < e; j++) a[j]++;
    }
    for (int i = 1; i < 100; i++) {
        if (a[i]) {
            if (a[i] == 1) ret += A;
            else if (a[i] == 2) ret += B * 2;
            else if (a[i] == 3) ret += C * 3;
        }
    }
    cout << ret;
    return 0;
}