// ben = biggest even number
/// Find the biggest even number between 0 and k (exclusive)

#include <iostream>

using namespace std;

int main() {
  int k, ben;
  cin >> k;
  ben = 0;
  for (int i = 0; i < k; i++) {
    if (i % 2 == 0 && i > ben) {
      ben = i;
    }
  }

  cout << ben << '\n';
}