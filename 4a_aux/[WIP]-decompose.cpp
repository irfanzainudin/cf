/// A tool to find every decomposition pattern (?) for k

#include <iostream>

using namespace std;

int main() {
    int k, rounds;
    cin >> k;
    rounds = 5;
    printf("Decomposing %d...\n", k);
    int sum = 0;
    printf("%d = ", k);
    for (int i = 0; i != k; i++) {
        printf("%d + ", i);
        sum += i;
    }
}