#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 변수의 메모리 주소를 담는 타입이 바로 포인터이다.
// 포인터의 크기는 OS가 32bit라면 4바이트, 64bit라면 8바이트로 고정
class Node {
public:
    int data;
    Node* next;
};
int a[3] = {1, 2, 3};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int * c = a;
    cout << c << '\n';
    cout << &a[0] << '\n';
    cout << c + 1 << '\n';
    cout << &a[1] << '\n';
    return 0;
}