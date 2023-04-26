//
// Created by antonio on 2023-04-11.
//
#include <bits/stdc++.h>
using namespace std;
int sumConPilas() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    stack<int> miPila;
    int P;
    cin>>P;

    for(int i=0; i<P; i++) {
        string opc = "";
        cin>>opc;
        if(opc == "AGREGA") {
            int x;
            cin>>x;
            miPila.push(x);
        }else if(opc=="CONSUME") {
            int ultimoElemento = miPila.top();
            miPila.pop();
            int penultimoElemento = miPila.top();
            miPila.pop();
            int suma = ultimoElemento + penultimoElemento;
            miPila.push(suma);
        }else if(opc=="IMPRIME") {
            cout << miPila.top() << "\n";
        }
    }
}