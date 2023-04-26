//
// Created by antonio on 2023-04-10.
//
#include <bits/stdc++.h>
using namespace std;
int cafe() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    list<string> miLista;
    list<string>::iterator it;
    unordered_map <string, list<string>::iterator>miMapa;
    for(int i=0; i<n; i++) {
        string nombre, opc;
        cin >> opc;
        if(opc[0]=='L'){
            cin >> nombre;
            miLista.push_back(nombre);
            miMapa[nombre]=--miLista.end();
        }else if(opc[0]=='M'){
            string nombre1, nombre2;
            cin >> nombre1 >> nombre2;
            it = miMapa[nombre2];
            it = miLista.insert(++it, nombre1);
            miMapa[nombre1] = it;
        } else {
            cout << miLista.front() << "\n";
            miLista.pop_front();
        }


    }
}