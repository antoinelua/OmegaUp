#include <bits/stdc++.h>
using namespace std;
int main(){
    string nombre;
    getline(cin, nombre);
    int n;
    cin >> n;
    int suma=0;

    for (int i = 0; i < n; ++i) {
        int pie; cin >> pie;
        if (pie == 1 && i % 2 != 0) {
            suma += 1;
        } else if (pie == 2 && i % 2 == 0) {
            suma += 2;
        }if (i % 10 == 0) {
            suma *= i;
        }
    }
    cout << "Nombre: " << nombre << "\n";
    cout << "Saltos: " << n << "\n";
    cout << "Puntos: " << suma;
    return 0;
}