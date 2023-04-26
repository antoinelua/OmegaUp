//
// Created by antonio on 2023-04-11.
//
#include <bits/stdc++.h>
using namespace std;

long long Memo[105];

long long recursividad(int x) {
    if(Memo[x + 50] != 0) {
        return Memo[x + 50];
    }
    if(x == 0) {
        return 1;
    }
    if(x < 0) {
        return Memo[x + 50] = recursividad(-x) + recursividad(x + 1) + 2;
    }
    else {
        return Memo[x + 50] = recursividad(-x + 1) + 1;
    }
}

int EvaluandoF() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int x;
    scanf("%d", &x);
    memset(Memo, 0, sizeof(Memo)); // Inicializar Memo con ceros
    cout << recursividad(x) << "\n";
    return 0;
}
