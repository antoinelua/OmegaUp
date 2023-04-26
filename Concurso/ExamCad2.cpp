#include <bits/stdc++.h>
using namespace std;
int Exam(){
    string palabra, n;
    cin >> palabra;
    for (int i = 0; i < palabra.length(); ++i) {
        char x = palabra.at(i);
        if(i%2==0){
            x= toupper(x);
        }
        n+=x;
    }
    cout << n;
}