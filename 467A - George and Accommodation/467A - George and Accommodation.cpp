#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int p, q, x(0);
  for (size_t i = 0; i < n; i++) {
    cin >> p >> q;
    if (p <= (q - 2)) {
      x++;
    }
  }

  cout << x << endl;
}
