#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int a[3][3], visited[3][3];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void go(int x, int y) {
    visited[x][y] = 1;
    cout << x << " : " << y << '\n';
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= 3 || ny >= 3) continue;
        if (a[nx][ny] == 0 || visited[nx][ny]) continue;
        go(nx, ny);
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    go(0, 0);

    return 0;
}