#include <vector>
long aVeryBigSum(std::vector<int> ar) {
  long long total = 0;

  for (std::size_t i = 0; i < ar.size(); i++) {
    total += ar[i];
  }

  return total;
}
