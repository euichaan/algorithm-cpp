#include <bits/stdc++.h>
using namespace std;
int n, m, x, y;
string a[102];
int visited[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;
    while (!q.empty()) {
        tie(x, y) = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (a[nx][ny] == '0' || visited[nx][ny]) continue;
            visited[nx][ny] = visited[x][y] + 1;
            q.push({nx, ny});
        }
    }
    cout << visited[n - 1][m - 1];
    return 0;
}