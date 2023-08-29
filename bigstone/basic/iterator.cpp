#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i <= 5; i++) v.push_back(i); // 1 2 3 4 5
    for (int i = 0; i < 5; i++) {
        cout << i << "번째 요소 : " << *(v.begin() + i) << '\n';
        cout << &*(v.begin() + i) << '\n'; // &* 를 통해 한단계 더 거쳐서 가리키는 해당 요소의 주소값 반환
    }
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
        // auto == vector<int>::iterator
    }
    cout << '\n';
    auto it = v.begin();
    advance(it, 3); // 해당 iterator를 cnt까지 증가시킨다. advance(iterator, cnt)
    cout << '\n';
    cout << *it << '\n';
}