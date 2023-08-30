#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 정렬된 배열에서 어떤 값이 나오는 첫번째 지점 또는 초과하는 지점의 위치를 찾으려면
// lower_bound()와 upper_bound()를 사용한다.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a {1, 2, 3, 3, 3, 4};
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << '\n'; // 2
    cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << '\n'; // 5

    cout << &*lower_bound(a.begin(), a.end(), 3) << '\n';
    cout << &*a.begin() << '\n';
    cout << &*(a.begin() + 1) << '\n';

    cout << *lower_bound(a.begin(), a.end(), 4) << '\n'; // 4 lower_bound가 가리키는 요소 출력

    // 숫자 3이 몇 개 들어있는지 출력하기
    vector<int> vec {1, 2, 3, 3, 3, 3, 4, 100};
    cout << upper_bound(vec.begin(), vec.end(), 3) - lower_bound(vec.begin(), vec.end(), 3) << '\n';

    // 해당 요소가 없을 경우 근방지점을 반환한다.
    vector<int> v;
    for (int i = 2; i <= 5; i++) v.push_back(i);
    v.push_back(7); // 2 3 4 5 7

    cout << "--------------------------------" << '\n';
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째
}