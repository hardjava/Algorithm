#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;

    int startIdx = 1;
    int endIdx = 2;
    int sum = 1;
    int count = 1;
    sum += endIdx;
    while (startIdx != endIdx) {
        if (sum == N) {
            sum -= startIdx;
            endIdx++;
            sum += endIdx;
            startIdx++;
            count++;
        } else if (sum > N) {
            sum -= startIdx;
            startIdx++;
        } else {
            endIdx++;
            sum += endIdx;
        }
    }

    cout << count;

    return 0;
}