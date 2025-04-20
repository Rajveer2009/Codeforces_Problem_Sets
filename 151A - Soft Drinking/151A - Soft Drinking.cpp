#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n(0), k(0), l(0), c(0), d(0), p(0), nl(0), np(0);
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int x = (k * l) / nl;
  int y = c * d;
  int z = p / np;
  cout << std::min(x, std::min(y, z)) / n << endl;
}
