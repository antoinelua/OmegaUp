//
// Created by antonio on 2023-04-09.
//
#include <bits/stdc++.h>
using namespace std;

int parentesis() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    stack<int> miPila;
    miPila.push(-1);
    string linea;
    cin>>linea;
    int subcadena, res = 0, cont=1;
    for(int i=0; i<linea.size(); i++) {
        if(linea[i] == '(') {
            miPila.push(i);
        }else {
            miPila.pop();
            if (!miPila.empty()) {
                subcadena = i - miPila.top();
                if (subcadena == res) {
                    cont++;
                }
                if (subcadena > res) {
                    res = subcadena;
                    cont = 1;
                }
            }else {
                miPila.push(i);
            }
        }
    }
    cout << res << " " << cont << "\n";
    return 0;
}
