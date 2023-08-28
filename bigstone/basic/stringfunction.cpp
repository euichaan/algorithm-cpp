#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
/**
 * += 문자열을 더할 때 보통 += 를 써서 문자열 또는 문자를 더합니다.
 * size() O(1)
 * insert(위치, 문자열) 특정위치에 문자열을 삽입합니다. O(n)
 * erase(위치, 크기) 특정위치에 크기만큼 문자열을 지웁니다. O(n)
 * pop_back() 문자열 끝을 지웁니다. O(1)
 * find(문자열) 특정 문자열을 찾아 위치를 반환합니다. 만약 못 찾을 경우 string::npos를 반환합니다. O(n)
 * substr(위치, 크기) 특정 위치에서 크기만큼의 문자열을 추출합니다. O(1)
 * atoi(s.c_str()) 입력받은 문자열이 문자라면 0을 반환하고 그게 아니라면 숫자를 반환한다
 */
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a = "love is";
    a += " pain!";
    a.pop_back();
    cout << a << " : " << a.size() << '\n'; // love is pain : 12
    cout << char(* a.begin()) << '\n'; // l
    cout << char(* (a.end() - 1)) << '\n'; // n

    a.insert(0, "test ");
    cout << a << " : " << a.size() << "\n"; // test love is pain : 17

    a.erase(0, 5);
    cout << a << " : " << a.size() << "\n"; // love is pain : 12

    auto it = a.find("love");
    if (it != string::npos) {
        cout << "포함되어 있다." << "\n";
    }
    cout << it << "\n";
    cout << string::npos << "\n";
    cout << a.substr(5, 2) << "\n";

    string s = "1";
    string s2 = "amumu";
    // c_str() 로 문자열에 대한 포인터 (char *) 타입 으로 바꾼다
    cout << atoi(s.c_str()) << '\n'; // 1
    cout << atoi(s2.c_str()) << '\n'; // 0
    cout << stoi(s) << '\n';
    return 0;
}

