#include <iostream>
#include <vector>

using namespace std;

// 배열 요소를 스왑하는 함수
void swap(vector<int>& arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// 순열을 생성하는 재귀 함수
void generatePermutations(vector<int>& arr, int start, int end) {
    if (start == end) {
        // 순열 출력
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i <= end; ++i) {
        // 현재 요소와 시작 요소를 스왑
        swap(arr, start, i);

        // 나머지 요소에 대한 순열 생성
        generatePermutations(arr, start + 1, end);

        // 스왑 원복
        swap(arr, start, i);
    }
}

int main() {
    int n;
    cout << "배열의 크기를 입력하세요: ";
    cin >> n;

    vector<int> arr(n);
    cout << "배열의 요소를 입력하세요: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "생성된 순열:" << endl;
    generatePermutations(arr, 0, n - 1);

    return 0;
}
