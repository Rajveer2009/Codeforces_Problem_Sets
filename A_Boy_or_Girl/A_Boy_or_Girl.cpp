#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string in;
  cin >> in;

  sort(in.begin(), in.end());

  int l = in.size();
  int n;

  for (int i = 0; i < l; i++) {
    if (in[i] != in[i - 1]) {
      n++;
    }
  }

  if (n & 1) {
    cout << "IGNORE HIM!";
  } else {
    cout << "CHAT WITH HER!";
  }
}
