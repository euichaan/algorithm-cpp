#include <bits/stdc++.h>
using namespace std;
int T;
int M, N, K, x, y; // M: 가로길이, N: 세로길이, K: 배추가 심어져 있는 위치의 개수
int board[52][52];
bool visited[52][52];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;
        int ret = 0;
        for (int i = 0; i < K; i++) {
            int bx, by; // 배추의 위치 X, Y
            cin >> bx >> by;
            board[by][bx] = 1;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (visited[i][j] == 0 && board[i][j]) {
                    ret++;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = 1;
                    while (!q.empty()) {
                        tie(x, y) =  q.front(); q.pop();
                        for (int dir = 0; dir < 4; dir++) {
                            int nx = x + dx[dir];
                            int ny = y + dy[dir];
                            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                            if (visited[nx][ny] || board[nx][ny] == 0) continue;
                            q.push({nx, ny});
                            visited[nx][ny] = 1;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < N; i++) {
            fill(board[i], board[i] + M, 0);
            fill(visited[i], visited[i] + M, 0);
        }
        cout << ret << '\n';
    }
    return 0;
}