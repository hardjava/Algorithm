#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
    vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A[i][j];
            D[i][j] = D[i][j - 1] + D[i - 1][j] - D[i - 1][j - 1] + A[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int result = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1];
        cout << result << '\n';
    }

    return 0;
}


//#include <iostream>
//
//using namespace std;
//
//int S[1026][1026] = {};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int N; // 크기
//    int M; // 합을 구해야 하는 횟수
//
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            int enter;
//            cin >> enter;
//            S[i][j] = S[i][j - 1] + enter;
//        }
//    }
//
//    int x1, y1, x2, y2;
//    for (int i = 0; i < M; i++) {
//        cin >> x1 >> y1 >> x2 >> y2;
//        int sum = 0;
//        for (int k = x1; k <= x2; k++) {
//            sum += S[k][y2] - S[k][y1 - 1];
//        }
//        cout << sum << '\n';
//    }
//
//    return 0;
//}