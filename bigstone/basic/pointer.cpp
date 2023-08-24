#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// double a = 4.4;
// int c = 10;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // <타입> * <변수명> = <해당 타입의 변수의 주소>
//    cout << &a << '\n';
//    double *b = &a;
//    int *d = &c;
//    cout << sizeof(b) << '\n';
//    cout << sizeof(d) << '\n';
    // 역참조 연산자
    string str = "kundol";
    string *dol = &str;
    cout << dol << '\n';
    cout << *dol << '\n';

    // Array to pointer decay
    // int a[N];
    // int *c = a; 크기 정보가 날라간다(decay). a의 첫 번째 주소가 바인딩된다.
    // int[] 와 int 는 다르다.
    // vector는 안된다.
    int a[3] = {1, 2, 3};
    int *c = a;
    cout << c << '\n';
    cout << &a[0] << '\n';
    cout << c + 1 << '\n';
    cout << &a[1] << '\n';
    return 0;
}