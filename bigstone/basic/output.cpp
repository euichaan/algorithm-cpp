#include <bits/stdc++.h>
using namespace std;
int a = 1;
char s = 'a';
string str = "어벤져스";
double b = 1.223123;
int main() {
    // 6자리까지 반올림해서 출력해야 한다면, cout.precision(자릿수 + 1)
    printf("아이언맨 : %d\n", a);
    printf("아이언맨 : %c\n", s);
    printf("아이언맨 : %s\n", str.c_str()); // 문자열을 printf 출력 시 c_str() 함수 사용
    printf("아이언맨 : %lf\n", b);
    return 0;
}