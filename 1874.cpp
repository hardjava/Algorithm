#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; // 수열의 개수
    cin >> N;

    stack<int> stack;
    vector<int> v(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int vIdx = 0;
    int i = 1;
    stack.push(i);
    string str;
    str += "+\n";

    while (vIdx < N) {
        int target = v[vIdx];

        if (stack.empty()) {
            stack.push(++i);
            str += "+\n";
        }

        while (stack.top() < target) {
            stack.push(++i);
            str += "+\n";
        }

        if (stack.top() > target) {
            cout << "NO";
            return 0;
        }

        if (stack.top() == v[vIdx]) {
            stack.pop();
            str += "-\n";
            vIdx++;
        }
    }

    cout << str;
    return 0;
}