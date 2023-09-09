#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1004];
int visited[1004];

// 자식들 노드를 방문하고 자신의 노드를 방문하는 것
void postOrder(int here) {
    if (visited[here] == 0) {
        if (adj[here].size() == 1) postOrder(adj[here][0]);
        if (adj[here].size() == 2) {
            postOrder(adj[here][0]);
            postOrder(adj[here][1]);
        }
        visited[here] = 1;
        cout << here << ' ';
    }
}

// 자신의 노드를 먼저 방문하고 다음 노드들을 방문하는 것
void preOrder(int here) {
    if (visited[here] == 0) {
        visited[here] = 1;
        cout << here << ' ';
        if (adj[here].size() == 1) preOrder(adj[here][0]);
        if (adj[here].size() == 2) {
            preOrder(adj[here][0]);
            preOrder(adj[here][1]);
        }
    }
}

// 왼쪽노드 -> 자신 -> 오른쪽 노드 순서로 방문
void inOrder(int here) {
    if (visited[here] == 0) {
        if (adj[here].size() == 1) { // 왼쪽밖에 없다면
            inOrder(adj[here][0]);
            visited[here] = 1;
            cout << here << ' ';
        } else if (adj[here].size() == 2) {
            inOrder(adj[here][0]);
            visited[here] = 1;
            cout << here << ' ';
            inOrder(adj[here][1]);
        } else { // 자식이 없다면
            visited[here] = 1;
            cout << here << ' ';
        }
    }
}

int main() {
    adj[1].push_back(2);
    adj[1].push_back(3);

    adj[2].push_back(4);
    adj[2].push_back(5);
    int root = 1;
    cout << "트리순회: postOrder \n";
    postOrder(root); memset(visited, 0, sizeof(visited));
    cout << "\n트리순회: preOrder \n";
    preOrder(root); memset(visited, 0, sizeof(visited));
    cout << "\n트리순회: inOrder \n";
    inOrder(root); memset(visited, 0, sizeof(visited));
    return 0;
}