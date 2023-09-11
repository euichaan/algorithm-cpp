#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<int> solution(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
         n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) { // 3, 5, 7, 9...
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> v = solution(120);
    for (auto e : v) cout << e << ' ';
}