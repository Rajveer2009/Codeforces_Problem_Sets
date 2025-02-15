#include <iostream>
using namespace std;

int main() {
  int a = 0, b = 0, x = 0;

  cin >> a >> b;

  while (b >= a) {
    a *= 3;
    b *= 2;

    x++;
  }

  cout << x << endl;
}
