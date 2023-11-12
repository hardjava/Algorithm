#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; // 수의 갯수
    cin >> N;
    vector<int> V(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    int result = 0;

    for (int i = 0; i < N; i++) {
        long target = V[i];
        int startIdx = 0;
        int endIdx = N - 1;

        while (startIdx < endIdx) {
            long long sum = V[startIdx] + V[endIdx];

            if (sum == target) {
                if (startIdx == i) {
                    startIdx++;
                } else if (endIdx == i) {
                    endIdx--;
                } else {
                    result++;
                    break;
                }
            } else if (sum > target) {
                endIdx--;
            } else {
                startIdx++;
            }
        }
    }

    cout << result;

    return 0;
}