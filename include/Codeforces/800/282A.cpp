#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    int n, x(0);
    std::cin >> n;
    std::string Operator;
    while (n--) {
        std::cin >> Operator;
        if (Operator[1] == '+') {
            ++x;
        } else {
            --x;
        }
    }
    std::cout << x << std::endl;

    return 0;
}
