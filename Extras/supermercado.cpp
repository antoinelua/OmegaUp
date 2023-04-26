//
// Created by antonio on 2023-04-14.
//
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, float>a, pair<string, float>b){
    return a.second>b.second;
}

void met(map<string, float>miTiket) {
    vector<pair<string, float>>Tiket;

    for(auto i: miTiket){
        Tiket.push_back(i);
    }
    sort(Tiket.begin(), Tiket.end(), compare);
    double total=0;
    int contador=1;
    for(auto i: Tiket){
        cout<<contador<< " | " << i.first << " | " << i.second << "\n";
        total += i.second;
        contador++;
    }
    cout << total;
}
int supermercado() {
    int n;
    cin >> n;
    map<string, float>miTiket;
    for (int i = 0; i < n; ++i) {
    string nombre;
    float precio;
    cin >> nombre >> precio;
    miTiket[nombre]= precio;
    }
    met(miTiket);

}