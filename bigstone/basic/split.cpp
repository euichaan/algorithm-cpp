#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
typedef pair<int, int> pii;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
// O(n) 으로 동작하는 split
vector<string> split(string input, string delimeter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimeter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s = "안녕하세요 나는 천재입니다 정말이에요!", d = " ";
    vector<string> a = split(s, d);
    for (auto s : a) cout << s << '\n';
}