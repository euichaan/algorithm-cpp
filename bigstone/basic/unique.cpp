#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 1, 1, 2, 2, 3, 3 -> 1, 2, 3
/**
 * 1. Map을 사용하는 방법
 * 2. unique 함수를 사용
 */
map<int ,int> mp;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 1번 방법
    vector<int> v{1, 1, 2, 2, 3, 3};
    for (int i : v) {
        if (mp[i]) continue; // key를 기반으로 map에 있는 요소를 참조
        else mp[i] = 1;
    }
    vector<int> ret;
    for (auto it : mp) {
        ret.push_back(it.first);
    }
    for (int i : ret) cout << i << '\n';

    // 2. unique 함수 사용
    // 1, 1, 2, 2, 3, 3 =>  1, 2, 3, 2, 3, 3 앞에서부터 중복되지 않은 것들 채우고 나머지 채운다
    vector<int> v1;
    for (int i = 1; i <= 5; i++) {
        v1.push_back(i);
        v1.push_back(i); // 1 1 2 2 3 3 4 4 5 5
                        // 1 2 3 4 5 3 4 4 5 5
    }
    for (int i : v1) cout << i << " ";
    cout << '\n';
    auto it = unique(v1.begin(), v1.end()); // 중복되지 않은 요소를 채운 후 그 다음 이터레이터 반환
    cout << it - v1.begin() << '\n'; // 5
    for (int i : v1) cout << i << " ";
}