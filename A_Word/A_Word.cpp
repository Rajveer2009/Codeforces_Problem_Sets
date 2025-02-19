#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();

  int U = 0;
  for (size_t i = 0; i < n; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      U++;
    }
  }

  for (size_t i = 0; i < n; i++) {
    if (U > n - U) {
      if (s[i] >= 'a' && s[i] <= 'z') {
        cout << char(s[i] - 32);
      } else {
        cout << s[i];
      }
    } else {
      if (s[i] >= 'a' && s[i] <= 'z') {
        cout << s[i];
      } else {
        cout << char(s[i] + 32);
      }
    }
  }
}
