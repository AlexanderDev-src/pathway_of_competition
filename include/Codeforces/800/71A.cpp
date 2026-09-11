#include <bits/stdc++.h>

const std::size_t LONG_WORD = 10;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    while (n--) {
        std::string x;
        std::cin >> x;
        if (x.size() > LONG_WORD) {
            std::cout << x.front() << x.size() - 2 << x.back() << '\n';
        } else {
            std::cout << x << '\n';
        }
    }
    return 0;
}
