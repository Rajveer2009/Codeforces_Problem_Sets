#include <iostream>
using namespace std;

int main() {
  string s, t;
  cin >> s;
  cin >> t;
  int n = s.length();

  string u = s;
  for (size_t i = 0; i < n; i++) {
    u[i] = s[(n - i) - 1];
  }

  if (u == t) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
