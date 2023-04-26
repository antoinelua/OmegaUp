
#include <bits/stdc++.h>
using namespace std;

int metro() {
    int n, numBuscar; cin >> n >> numBuscar;
    int sum=0;
    for (int i = 0; i < n; ++i) {
        int numero; cin >> numero;
        sum += numero;
    }
    if(sum != numBuscar){
        cout << "Original";
    }else {
        cout << "Falso";
    }
}