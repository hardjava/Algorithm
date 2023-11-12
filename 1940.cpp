#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> V(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    int result = 0;

    int startIdx = 0;
    int endIdx = N - 1;
    int sum = 0;

    while (startIdx < endIdx) {
        sum = V[startIdx] + V[endIdx];

        if (sum == M) {
            result++;
            startIdx++;
            endIdx--;
        } else if (sum > M) {
            endIdx--;
        } else {
            startIdx++;
        }
    }

    cout << result;

    return 0;
}