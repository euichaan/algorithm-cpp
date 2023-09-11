#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

/**
 * 순서와 상관 o 뽑는다면 -> 순열
 * 순서와 상관 x 뽑는다면 -> 조합
 * nPr = n! / (n - r)! n개중에 r개를 뽑을 때
 *
 * 탐색을 시작하는 상태가 처음 순열이어야 하기 때문에 모든 순열을 탐색하기 위해서는 처음에 정렬해줘야한다.
 * 시간복잡도는 최악의 경우 O(n)이며, 모든 순열을 전부 순회할 때 필요한 연산량의 상한은 O(n * n!)이다.
 */
int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> a = {2, 1, 3, 100, 200};
    sort(a.begin(), a.end());
    do {
        for(int i = 0; i < 2; i++) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }while(next_permutation(a.begin(), a.end()));
}