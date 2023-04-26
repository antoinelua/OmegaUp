//
// Created by antonio on 2023-04-14.
//
#include <bits/stdc++.h>
using namespace std;

int ULAM() {
    int n;
    cin >> n;
    vector<int>num;
    num.push_back(n);
    while(n != 1) {
        if(n%2==0)
        {
            n=n/2;

        }else{
            n=(n*3)+1;
        }
        num.push_back(n);
    }
    sort(num.begin(), num.end());
    for(auto i: num){
        cout << i << " ";
    }
    return 0;
}