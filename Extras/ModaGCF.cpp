//
// Created by antonio on 2023-04-14.
//
#include <bits/stdc++.h>
using namespace std;
int moda(){
    int n, cont=0, may=0;
    cin >> n;
    unordered_map<int, int>miLista;
    for(int i=0; i<n; i++){
    int nums;
    cin>>nums;
    if(miLista.find(nums)==miLista.end()){
        miLista[nums] = 1;
    }else {
        miLista[nums]++;
    }
    if(miLista[nums]>cont){
        cont = miLista[nums];
        may=nums;
    }
    }
    cout << may;
}