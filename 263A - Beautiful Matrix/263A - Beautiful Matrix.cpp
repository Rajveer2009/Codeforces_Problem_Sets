#include <cstddef>
#include <iostream>
using namespace std;

int main() {
  int arr[5][5];

  for (size_t i = 0; i < 5; i++) {
    for (size_t j = 0; j < 5; j++) {
      cin >> arr[i][j];
    }
  }

  int row, col;
  for (size_t i = 0; i < 5; i++) {
    for (size_t j = 0; j < 5; j++) {
      if (arr[i][j] == 1) {
        row = i;
        col = j;
      }
    }
  }

  int x = 0;
  if (row - 2 < 0) {
    x += -1 * (row - 2);
  } else {
    x += (row - 2);
  }
  if (col - 2 < 0) {
    x += -1 * (col - 2);
  } else {
    x += (col - 2);
  }

  cout << x << endl;
}
