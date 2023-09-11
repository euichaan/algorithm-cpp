#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 안전 영역
// 2차원 배열의 행과 열의 개수를 나타내는 N
// 장마철에 물에 잠기지 않는 안전한 영역의 최대 개수를 출력한다.
int board[102][102];
bool vis[102][102];
int N, x, y;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int maxH = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
            if (maxH < board[i][j]) maxH = board[i][j];
        }
    }
    int ret = 0;
    // 1부터 최대 높이까지 전부 잠겼을 때 안전 영역의 최대 개수 구하기
    for (int k = 0; k <= maxH; k++) { // k로 수정
        for (int i = 0; i < N; i++) {
            fill(vis[i], vis[i] + N, 0);
        }
        int size = 0; // 크기 변수 초기화
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (board[i][j] > k && vis[i][j] == 0) {
                    size++;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    vis[i][j] = 1;
                    while (!q.empty()) {
                        tie(x, y) = q.front(); q.pop();
                        for (int dir = 0; dir < 4; dir++) {
                            int nx = x + dx[dir];
                            int ny = y + dy[dir];
                            if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                            if (!vis[nx][ny] && board[nx][ny] > k) {
                                q.push({nx, ny});
                                vis[nx][ny] = 1;
                            }
                        }
                    }
                }
            }
        }
        ret = max(ret, size);
    }
    cout << ret;
}
