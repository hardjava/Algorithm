#include <iostream>
#include <queue>

using namespace std;

struct compare {
    bool operator()(int o1, int o2) {
        int thisInteger = abs(o1);
        int enterInteger = abs(o2);

        if (thisInteger == enterInteger) {
            return o1 > o2;
        } else {
            return thisInteger > enterInteger;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 우선순위 큐 선언방식 <자료형, 구현체, 비교 함수명>
    priority_queue<int, vector<int>, compare> priorityQueue;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int enter;
        cin >> enter;

        if (enter == 0) {
            if (priorityQueue.empty()) {
                cout << 0 << "\n";
            } else {
                cout << priorityQueue.top() << "\n";
                priorityQueue.pop();
            }
        } else {
            priorityQueue.push(enter);
        }
    }

    return 0;
}