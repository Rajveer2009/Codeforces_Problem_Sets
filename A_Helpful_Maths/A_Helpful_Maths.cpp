#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string in;
  cin >> in;

  int n = in.size();
  int arr[(n / 2) + 1];
  int m = sizeof(arr) / sizeof(arr[0]);

  int j = 0;
  for (size_t i = 0; i < n; i++) {
    if (i % 2 == 0) {
      arr[j] = in[i] - 48;
      j++;
    }
  }

  sort(arr, arr + m);

  for (size_t i = 0; i < (n / 2); i++) {
    cout << arr[i] << "+";
  }
  cout << arr[m - 1];
}
