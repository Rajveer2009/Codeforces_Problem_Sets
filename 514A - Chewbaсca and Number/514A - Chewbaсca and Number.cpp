#include <iostream>
#include <string>
using namespace std;

int main() {
  string in;
  cin >> in;

  for (size_t i = 0; i < in.length(); i++) {
    int d = in[i] - '0';
    if (i == 0) {
      if (d >= 5 && d <= 8) {
        cout << 9 - d;
      } else {
        cout << d;
      }
    } else {
      if (d >= 5) {
        cout << 9 - d;
      } else {
        cout << d;
      }
    }
  }
  cout << endl;
}
