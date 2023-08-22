#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {1, 2, 3};
    do {
        for (int i : v) cout << i << " ";
        cout << '\n';
    }while(next_permutation(v.begin(), v.end()));
}