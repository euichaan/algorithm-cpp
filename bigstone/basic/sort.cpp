#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * O(nlogn)
 * sort(first, last, *커스텀비교함수) [first, last) [ : 포함 ) : 미포함
 * 기본적으로 오름차순이며 greater<타입>()을 넣어 내림차순으로 변경할 수 있다.
 */
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}
vector<int> a;
int b[5];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 5; i >= 1; i--) b[i - 1] = i;
    for (int i = 5; i >= 1; i--) a.push_back(i);

    sort(b, b + 5);
    sort(a.begin(), a.end());
    for (int i : b) cout << i << ' ';
    cout << '\n';
    for (int i : a) cout << i << ' ';
    cout << '\n';


    sort(b, b + 5, less<int>());
    sort(a.begin(),a.end(), less<int>());
    for(int i : b) cout << i << ' '; cout << '\n';
    for(int i : a) cout << i << ' '; cout << '\n';

    // 내림차순
    sort(b, b + 5, greater<int>());
    sort(a.begin(), a.end(), greater<int>());
    for(int i : b) cout << i << ' '; cout << '\n';
    for(int i : a) cout << i << ' '; cout << '\n';
    // pair를 기반으로 만들어진 vector의 경우 따로 설정하지 않으면 first, second 순으로
    // 차례차례 오름차순 정렬
    vector<pair<int, int>> v;
    for (int i = 10; i >= 1; i--) v.push_back({i, 10 - i});
    sort(v.begin(), v.end());
    for (auto it : v) cout << it.first << " : " << it.second << "\n";

    // first는 내림차순, second는 오름차순 정렬하고 싶다면?
    sort(v.begin(), v.end(), cmp);
    for (auto it : v) cout << it.first << " : " << it.second << '\n';
    return 0;
}