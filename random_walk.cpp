#include "random_walk.hpp"

std::vector<double> random_walk(
  std::size_t n,
  double mean,
  double stddev
) {
  std::random_device rd;
  std::mt19937 mt(rd());
  std::normal_distribution<double> dist(mean, stddev);

  std::vector<double> v(n);
  for (auto& x : v) {
      x = dist(mt);
  }

  std::partial_sum(v.begin(), v.end(), v.begin());
  return v;
}
