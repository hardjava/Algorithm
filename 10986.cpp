#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long N, M;
    cin >> N >> M;
    vector<long> S(N + 1, 0);
    vector<long> R(M, 0);
    long count = 0;

    for (int i = 1; i <= N; i++) {
        int enter = 0;
        cin >> enter;
        S[i] = (S[i - 1] + enter) % M;
    }

    for (int i = 1; i <= N; i++) {
        if (S[i] == 0) {
            count++;
        }
        R[S[i]]++;
    }

    for (int i = 0; i < M; i++) {
        if (R[i] > 1) {
            count += R[i] * (R[i] - 1) / 2;
        }
    }

    cout << count << '\n';

    return 0;
}