// Online C++ compiler to run C++ program online
/*
Scrieți definiția completă a unui subprogram cu numele i_prim care primește prin singurul său parametru, n, un număr natural cu cel mult 9 cifre și returnează diferența minimă p2-p1 în care p1 și p2 sunt numere prime și p1≤n≤p2.
Restricții și precizări: n>2.
Exemplu: Dacă n=28, i_prim(n)=6, deoarece p1=23 și p2=29.
*/
#include <iostream>
using namespace std;
int i_prim(int n);
bool este_prim(int numar);
int main() {
    cout<<i_prim(28);
}
int i_prim(int n){
    int p1=0;
    int p2=n;
    for(int i=1;i<=n;i++){
        if(este_prim(i)){
            p1=i;
        }
    }
    while(true){
        if(este_prim(p2)){
            break;
        }
        p2++;
    }
    return p2-p1;
}
bool este_prim(int numar){
    int suma=0;
    for(int i=1;i<=numar;i++){
        if(numar%i==0){
            suma+=i;
        }
    }
    if(suma==(numar+1)){
        return true;
    }
    return false;
}
