#include <iostream>
#include <string>
using namespace std;

int main() {
  string in;
  cin >> in;

  if (in[0] >= 'a' && in[0] <= 'z') {
    cout << static_cast<char>(in[0] - 32);
  } else {
    cout << in[0];
  }

  for (int i = 1; i < in.size(); i++) {
    cout << in[i];
  }
  cout << endl;
}
