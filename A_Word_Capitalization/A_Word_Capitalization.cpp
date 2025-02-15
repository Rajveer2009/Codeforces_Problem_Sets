#include <iostream>
#include <string>
using namespace std;

int main() {
  string in;
  cin >> in;

  cout << static_cast<char>(in[0] - 32);

  for (int i = 1; i < in.size(); i++) {
    cout << in[i];
  }
  cout << endl;
}
