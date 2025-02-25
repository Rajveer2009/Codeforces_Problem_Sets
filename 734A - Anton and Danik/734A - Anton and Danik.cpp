#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  string in;
  cin >> in;

  int A(0), D(0);

  for (size_t i = 0; i < n; i++) {
    if (in[i] == 'A') {
      A++;
    } else if (in[i] == 'D') {
      D++;
    }
  }

  if (A > D) {
    cout << "Anton" << endl;
  } else if (A < D) {
    cout << "Danik" << endl;
  } else if (A == D) {
    cout << "Friendship" << endl;
  }
}
