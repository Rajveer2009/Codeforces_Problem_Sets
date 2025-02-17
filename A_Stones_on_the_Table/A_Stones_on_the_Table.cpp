#include <iostream>
using namespace std;

int main() {
  int n;
  string in;

  cin >> n;
  cin >> in;

  int x = 0, p;

  for (size_t i = 0; i < n; i++) {
    p = in[i - 1];
    if (in[i - 1] == in[i]) {
      x++;
    }
  }

  cout << x << endl;
}
