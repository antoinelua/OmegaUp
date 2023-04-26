#include <bits/stdc++.h>
using namespace std;

int recursion(int n) {
    if(n==0 || n==1){
        return n=1;
    }else {
       return (recursion(n-1)+2* recursion(n-2));
    }
}
int recu() {
    int n;
    cin>>n;
    cout << recursion(n);
}