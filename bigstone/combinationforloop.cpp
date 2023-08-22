#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};
int main() {
    cin.tie(0)->sync_with_stdio(0);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << i << " " << j << '\n';
        }
    }
}