#include <iostream>
using namespace std;

int main() {
  int k, w, n;
  cin >> k >> w >> n;

  int t = 0;
  for (size_t i = 1; i < n + 1; i++) {
    t += k * i;
  }

  if (t > w) {
    cout << t - w;
  } else {
    cout << 0;
  }
}
