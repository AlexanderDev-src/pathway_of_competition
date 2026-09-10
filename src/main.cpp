#include <bits/stdc++.h>
#include <string>

int main() {
  int amount;
  std::string words;
  std::cin >> amount;
  for (int i = 0; i < amount; i++) {
    std::cin >> words;

    if (words.size() > 10) {

    } else {
      std::cout << words;
    }
  }
  return 0;
}
