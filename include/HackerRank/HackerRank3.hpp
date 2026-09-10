#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <printf.h>
#include <vector>
int diagonalDifference(std::vector<std::vector<int>> arr) {
  long long primary;
  long long secondary;
  for (std::size_t i = 0; i < arr.size(); i++) {
    primary += arr[i][i];
    secondary += arr[i][arr.size() - 1 - i];
  }
  return static_cast<int>(std::llabs(primary - secondary));
}

void plusMinus(std::vector<int> arr) {
  int n = arr.size();
  int pos = 0, neg = 0, zero = 0;

  for (int x : arr) {
    if (x > 0)
      pos++;
    else if (x < 0)
      neg++;
    else
      zero++;
  }

  std::cout << std::fixed << std::setprecision(6);
  std::cout << static_cast<double>(pos) / n << "\n"
            << static_cast<double>(neg) / n << "\n"
            << static_cast<double>(zero) / n << "\n";
}

void staircase(int n) {
  for (int i = 1; i <= n; i++) {
    std::cout << std::string(n - i, ' ') << std::string(i, '#') << "\n";
  }
}

void miniMaxSum(std::vector<int> arr) {
  long long total = 0;
  long long mn = arr[0], mx = arr[0];

  for (int x : arr) {
    total += x;
    if (x < mn)
      mn = x;
    if (x > mx)
      mx = x;
  }

  std::cout << (total - mx) << " " << (total - mn) << "\n";
}

void check_even(int x) {
  if (x % 2 == 0) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
}
