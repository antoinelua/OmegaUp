
#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int>b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    return a.first > b.first;
}

void sort(map<int, int> a){
    vector<pair<int, int>> pares;

    for(auto& p: a){
        pares.push_back(p);
    }

    sort(pares.begin(), pares.end(), compare);

    for(auto& p: pares){
        cout << p.first<< endl;
    }
}

int buddy(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int x;
    cin>>x;
    map<int, int> perros;

    for (int i = 0; i < x; ++i) {
        int num;
        cin>>num;
        if(perros.find(num)==perros.end()){
            perros[num] = 1;
        }else{
            perros[num]++;
        }
    }

    sort(perros);

    return 0;

}