//
// Created by antonio on 2023-04-11.
//
#include <bits/stdc++.h>
using namespace std;
int wenaO() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    map<char,int> mapa;
    string oracion;
    getline(cin,oracion);

    for(int i=0;i<oracion.length();i++){
        if(oracion.at(i)==' '){ continue;}
        char letra = tolower(oracion.at(i));
        if(mapa.find(letra)==mapa.end()){
            mapa[letra] = 1;
        }
        else{
            mapa[letra]++;
        }
    }
    map<char,int>:: iterator iterator;
    for(iterator=mapa.begin(); iterator != mapa.end(); iterator++){
        char letra = iterator->first;
        int cont = iterator->second;
        cout<<cont<<" ";
    }

    return 0;
}