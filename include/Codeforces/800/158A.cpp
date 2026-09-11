#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int input1;
    for (int i = 0; i < k; ++i) {
        cin >> input1;

        if (input1 == 0) {
            cout << input1 << endl;
            return 0;
        }
    }
    int input2;

    for (int i = k; i < n; ++i) {
        cin >> input2;

        if (input2 != input1) {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;

    return 0;
}
