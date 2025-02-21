#include <iostream>
using namespace std;

int main() {
  string in;
  cin >> in;
  int n = in.length();

  int j = 1;
  for (size_t i = 1; i <= n; i++) {
    if (in[i] == in[i - 1]) {
      j++;
      if (j == 7) {
        cout << "YES" << endl;
        return 0;
      }
    } else {
      j = 1;
    }
  }
  cout << "NO" << endl;

  return 0;
}
