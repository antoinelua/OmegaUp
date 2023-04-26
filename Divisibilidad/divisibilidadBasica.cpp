//
// Created by antonio on 2023-04-10.
//
#include <bits/stdc++.h>
using namespace std;

int divisibilidad() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    unsigned int num;
    while(cin >> num) {
        if (num % 2 == 0) {
            cout << "2 ";
        } else {
            cout << "- ";
        }
        if (num % 3 == 0) {
            cout << "3 ";
        } else {
            cout << "- ";
        }
        if (num % 4 == 0) {
            cout << "4 ";
        } else {
            cout << "- ";
        }
        if (num % 5 == 0) {
            cout << "5 ";
        } else {
            cout << "- ";
        }
        if (num % 6 == 0) {
            cout << "6 ";
        } else {
            cout << "- ";
        }
        cout << "\n";
    }

    return 0;
}

