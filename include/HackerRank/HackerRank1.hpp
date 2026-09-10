#include <vector>

std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
  int alice_scores = 0;
  int bob_scores = 0;

  for (std::size_t i = 0; i < a.size() && i < b.size(); i++) {
    if (a[i] > b[i]) {
      alice_scores += 1;
    }
    if (a[i] < b[i]) {
      bob_scores += 1;
    }
  }

  return {alice_scores, bob_scores};
}
