#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // 수의 개수, 합을 구해야 하는 횟수
    cin >> N >> M;
    int S[100001] = {}; // 구간 합 저장

    for (int i = 1; i <= N; i++) {
        int enter;
        cin >> enter;
        S[i] = S[i - 1] + enter;
    }
    for (int i = 1; i <= M; i++) {
        int start, end;
        cin >> start >> end;
        cout << S[end] - S[start - 1] << '\n';
    }

    return 0;
}