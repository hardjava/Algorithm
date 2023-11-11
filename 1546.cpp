#include <iostream>

using namespace std;

int main() {
    int N = 0;
    int A[1000];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long max = 0;
    long sum = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        sum += A[i];
    }
    double result = sum * 100.0 / max / N;
    cout << result;

    return 0;
}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int N; // 시험을 본 과목의 개수 <=1000
//    cin >> N;
//    int arr[N];
//
//    for (int i = 0; i < N; i++) {
//        cin >> arr[i];
//    }
//
//    int M = arr[0]; // 최댓값
//    for (int i = 1; i < N; i++) {
//        if (arr[i] > M) {
//            M = arr[i];
//        }
//    }
//
//    double sum = 0;
//    for (int i = 0; i < N; i++) {
//        sum += (double) arr[i] / M * 100;
//    }
//    double avg = (double) sum / N;
//
//    cout << avg;
//
//    return 0;
//}