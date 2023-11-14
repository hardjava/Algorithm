#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; // 수열의 크기
    cin >> N;

    vector<int> enterVector(N, 0);
    vector<int> printVector(N, -1);
    stack<int> stack;

    for (int i = 0; i < N; i++) {
        cin >> enterVector[i];
    }

    int idx = 0;
    stack.push(idx);

    for (int i = 1; i < N; i++) {
        int topIdx = stack.top();
        if (enterVector[topIdx] < enterVector[i]) {
            printVector[topIdx] = enterVector[i];
            stack.pop();
            while (!stack.empty() && enterVector[stack.top()] < enterVector[i]) {
                printVector[stack.top()] = enterVector[i];
                stack.pop();
            }
        }
        stack.push(i);
    }

    for (int i = 0; i < N; i++) {
        cout << printVector[i] << " ";
    }

    return 0;
}