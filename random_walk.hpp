#pragma once

#include <vector>
#include <random>
#include <numeric>

std::vector<double> random_walk(
  std::size_t n,
  double mean = 0.0,
  double stddev = 1.0
);

