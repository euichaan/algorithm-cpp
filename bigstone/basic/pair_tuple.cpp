#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // pair {first, second}
    pi = {1, 2};
    tl = make_tuple(1, 2, 3);
    tie(a, b) = pi;
    cout << a << " : " << b << '\n';
    tie(a, b, c) = tl;
    cout << a << " : " << b << " : " << c << '\n';

    // not using tie
    a = get<0>(tl);
    b = get<1>(tl);
    c = get<2>(tl);
    cout << a << " : " << b << " : " << c << '\n';
}