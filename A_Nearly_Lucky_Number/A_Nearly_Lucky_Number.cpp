#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;
  cin >> n;

  int j = 0;
  for (size_t k = 0; k < n.length(); k++) {
    if (n[k] == '4' || n[k] == '7') {
      j++;
    }
  }

  string k = to_string(j);
  for (size_t m = 0; m < k.length(); m++) {
    if (k[m] != '4' && k[m] != '7') {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

  return 0;
}
