#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;

  int total_cost = 0;
  int bucks_soldier_has = n;

  int i = 1;
  while (i <= w) {
    int banana_cost = i * k;
    total_cost += banana_cost;
    i++;
  }

  if (total_cost - bucks_soldier_has <= 0) cout << 0 << '\n';
  else cout << (total_cost - bucks_soldier_has) << '\n';
}