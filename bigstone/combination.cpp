#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * 재귀로 구현하는 조합(combination)
 * nCr = n! / r!(n-r)!
 */
int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};
void print(vector<int> b) {
    for (int i : b) cout << i << " ";
    cout << '\n';
}
void combi(int start, vector<int> b) {
    if (b.size() == k) {
        print(b);
        return;
    }
    for (int i = start + 1; i < n; i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> b;
    combi(-1, b);
    return 0;
}