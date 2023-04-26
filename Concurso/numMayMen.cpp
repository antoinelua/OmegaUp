#include <bits/stdc++.h>
using namespace std;

int numero() {
    int num1, num2; cin >> num1 >> num2;
    if(num1 > num2){
        cout << num1 << "\n" << num2;
    }else{
        cout << num2 << "\n" << num1;
    }
    return 0;
}