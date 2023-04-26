//
// Created by antonio on 2023-04-11.
//
#include <bits/stdc++.h>
using namespace std;

int banco() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    queue <char> cola;
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        char letra;
        cin>>letra;
        if(letra == 'E') {
            cola.push(letra);
        }else if(letra == 'N'){
            if(cola.size()>4){
                cout << "no espera\n";
                continue;
            }else {
                cout << "espera\n";
                cola.push(letra);
            }
        }else if(letra == 'F') {
            cola.pop();
        }
    }
}