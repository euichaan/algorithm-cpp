#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int a[102][102];
int visited[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, sx, sy, cx, cy;
int main() {
    cin >> n >> m;
    cin >> sx >> sy;
    cin >> cx >> cy;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = 1;
    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (a[nx][ny] == 0 || visited[nx][ny]) continue;
            visited[nx][ny] = visited[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << visited[i][j] << ' ';
        }
        cout << '\n';
    }
}