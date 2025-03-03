#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int in, g(0), p(0);
  for (size_t i = 0; i < n; i++) {
    cin >> in;
    if (in != p) {
      g++;
    }
    p = in;
  }

  cout << g << endl;
}
