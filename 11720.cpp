#include <iostream>

using namespace std;

int main() {
    int num;
    string enter;

    cin >> num >> enter;

    int sum = 0;

    for (int i = 0; i < num; i++) {
        sum += enter[i] - '0';
    }

    cout << sum;

    return 0;
}