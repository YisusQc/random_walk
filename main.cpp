#include "random_walk.hpp"
#include <gnuplot-iostream.h>

int main() {
  Gnuplot gp;

  auto v0 = random_walk(1000);
  auto v1 = random_walk(1000);

  gp << "set title 'Graph of two random lines'\n";
  gp << "plot '-' with lines title 'v0',"
     << "'-' with lines title 'v1'\n";

  gp.send(v0);
  gp.send(v1);

  return 0;
}
