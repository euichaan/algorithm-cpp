#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// 예를 들어 입력이 "amumu" 또는 0 이렇게 온다고 했을 때
// string 으로 입력을 받아 입력받은 글자가 문자열인지 숫자인지 확인해야 하는 로직이 필요할 때 쓰인다.
// atoi(s.c_str()) 문자라면 -> 0, 그게 아니라면 숫자를 반환
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 문자라면 0, 그게 아니라면 숫자 반환
    string s = "1";
    string s2 = "amumu";
    cout << atoi(s.c_str()) << '\n'; // 1
    cout << atoi(s2.c_str()) << '\n'; // 0
}