//
// Created by antonio on 2023-04-13.
//
#include <bits/stdc++.h>
using namespace std;
int abc() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int abc[3];
    cin>>abc[0]>>abc[1]>>abc[2];
    sort(abc, abc+3);
    string cadena;
    cin>>cadena;
    for(int i=0;i<3;i++){
        if(cadena[i]=='A'){
            cout<<abc[0]<<" ";
        }else if(cadena[i]=='B'){
            cout<<abc[1]<<" ";
        }else {
            cout<<abc[2]<<" ";
        }
    }
}