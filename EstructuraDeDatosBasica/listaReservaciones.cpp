//
// Created by antonio on 2023-04-14.
//
#include <bits/stdc++.h>

using namespace std;
int reservaciones() {
    int n, cont=0;
    cin >> n;

    unordered_map<string, string> reservacion;
    unordered_map<string, string> repeat;
    for(int i=0; i<n; i++) {
        string dia, mes, anho, nom_evento;
        cin >> dia >> mes >> anho >> nom_evento;
        string fecha = dia+" "+mes+" "+anho;
        if(reservacion.count(fecha)){
            repeat[fecha]=nom_evento;
        }else{
            reservacion[fecha]=nom_evento;
        }

    }

    cout << repeat.size() << "\n";
    for(auto i: repeat){
        cout << i.first << " " << i.second << "\n";
    }


}
