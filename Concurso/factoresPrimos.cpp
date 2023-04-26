#include <bits/stdc++.h>
using namespace std;

void factorPrimo(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    cout << "\n";
}

int fact() {
    int n;
    cin >> n;
    factorPrimo(n);
    return 0;
}