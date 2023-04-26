//
// Created by antonio on 2023-04-22.
//
#include <bits/stdc++.h>
using namespace std;
int c() {
    int n;
    cin >> n;
    vector<int> numeros[5];
    for (int i = 0; i < n; ++i) {
        int nums;
        cin >> nums;
        string num = to_string(nums);
        int tam = num.size();
        numeros[tam-1].push_back(nums);
    }
    for (int i = 0; i < 4; ++i) {
        sort(numeros[i].rbegin(), numeros[i].rend());
        for(int a: numeros[i]) {
            cout << a << " ";
        }
    }
}