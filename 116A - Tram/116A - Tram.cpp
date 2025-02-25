#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n], b[n], c[n];

  for (size_t i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    if (i == 0) {
      c[i] = a[i] + b[i];
    } else {
      c[i] = (c[i - 1] - a[i]) + b[i];
    }
  }

  sort(c, c + n);

  cout << c[n - 1] << endl;
}
