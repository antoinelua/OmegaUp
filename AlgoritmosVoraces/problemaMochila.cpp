//
// Created by antonio on 2023-04-09.
//
#include <bits/stdc++.h>
using namespace std;
int problemaMochila() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<tuple<double, double, double>> objeto;
    int aux=0;
    double N, C, res=0;
    cin >> N >> C;
    for(int i=0; i<N; i++){
        double indice, peso, valor;
        cin >> peso >> valor;
        indice = valor/peso;
        objeto.push_back({indice, valor, peso});
    }
    sort(objeto.rbegin(), objeto.rend());
    while(C>0) {
        auto[indice, va, pe] = objeto[aux];
        if(C>pe) {
            res = res + va;
            C-=pe;
        }else {
            res = res + va*(C/pe);
            C=0;
        }
         aux++;
    }
    cout << fixed << setprecision(2) << res << "\n";
    return 0;
}