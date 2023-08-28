#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 987654321;
const int INF2 = 1e9;
// C++ 엄격한 타입시스템 언어이기 때문에 매번 타입(type)을 설정해줘야 함.
// 매개변수의 수나 타입 등에 따라 함수를 다르게 인식한다.
// void, char, string, bool, int, long long, double, unsigned long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a = "나는야";
    cout << a[0] << '\n'; // ? 이상한 문자. 1바이트씩 출력한다는 것인데 한글은 한 글자당 3바이트
    cout << a[0] << a[1] << a[2] << '\n'; // 나
    cout << a << '\n'; // 나는야

    string b = "abc";
    cout << b[0] << '\n'; // a
    cout << b << '\n'; // abc

    int c = 0;
    cout << bool(c) << '\n'; // 0

    // int 는 -2147483648 ~ 2147482647
    return 0;
}