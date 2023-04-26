//
// Created by antonio on 2023-04-10.
//
#include <bits/stdc++.h>
using namespace std;

int opeConListas() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    list<int> miLista;
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        miLista.clear();
        cout << "Caso " << i+1 << ":" << "\n";
        int n;
        cin>>n;
        for(int j=0; j<n; j++) {
            int x, y;
            cin >> x;
            if(x==1) {
                cin>>y;
                miLista.push_front(y);
            }else if(x==2) {
                cin>>y;
                miLista.push_back(y);
            }else if(x==3) {
                if(!miLista.empty()){
                    miLista.pop_front();
                }

            }else if(x==4) {
                if(!miLista.empty()){
                    miLista.pop_back();
                }
            }

            int size = miLista.size();
            if (size == 0) {
                cout << "Lista vacia" << "\n";
            }else{
                for (int elemento : miLista) {
                    cout << elemento << " ";
                }
                cout << "\n";
            }

        }
    }
    return 0;
}