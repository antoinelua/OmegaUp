//
// Created by antonio on 2023-04-11.
//
#include <bits/stdc++.h>

using namespace std;

int maxElePila() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    stack<unsigned int> pila;
    multiset<unsigned int> miMultiset;
    int unsigned n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int opc;
        cin>>opc;
        if(opc == 1) {
            unsigned int x;
            cin >> x;
            pila.push(x);
            miMultiset.insert(x);
            continue;
        }
        if(opc == 2) {
            miMultiset.erase(miMultiset.find(pila.top()));
            pila.pop();
            continue;
        }
        if(opc == 3) {
            cout << *miMultiset.rbegin() << "\n";
            continue;
        }
    }
    return 0;
}