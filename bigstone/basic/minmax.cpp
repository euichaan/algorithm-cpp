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
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *max_element(v.begin(), v.end());
    auto b = max_element(v.begin(), v.end());
    cout << a << '\n';
    cout << (int)(b - v.begin()) << '\n';

    int min = *min_element(v.begin(), v.end());
    auto m = min_element(v.begin(), v.end());
    cout << min << '\n'; // 1
    cout << (int)(m  - v.begin()) << '\n'; // 0
}