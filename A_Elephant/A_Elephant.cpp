#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  int i = 0;
  while (true) {
    if (x > 5) {
      x -= 5;
      i++;
    } else if (x > 0) {
      i++;
      cout << i;
      break;
    } else {
      cout << i;
      break;
    }
  }
}
