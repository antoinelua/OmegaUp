//
// Created by antonio on 2023-04-09.
//
#include <bits/stdc++.h>
using namespace std;
int darCambio() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int cambio, cont1=0, cont2=0, cont5=0, cont10=0;
    cin>>cambio;
    while(cambio>=10) {
        cont10++;
        cambio-=10;
    }
    while(cambio>=5) {
        cont5++;
        cambio-=5;
    }
    while(cambio>=2) {
        cont2++;
        cambio-=2;
    }
    while(cambio>=1) {
        cont1++;
        cambio-=1;
    }
    cout << cont10 << " " << cont5 << " " << cont2 << " " << cont1;
    return 0;
}