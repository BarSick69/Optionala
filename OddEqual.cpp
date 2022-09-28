// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int OddEqual(int n);
int main() {
    cout<<"Dati un numar intreg: ";
    int numar;
    cin >> numar;
    cout <<"\n";
    cout<<OddEqual(numar);
    return 0;
}

int OddEqual(int n){
    bool prima_iteratie=true;
    int cifra_impara=0;
    int cifra;
while(n!=0){
    cifra=n%10;
    n=n/10;
    if(cifra%2!=0&&prima_iteratie){
        cifra_impara=cifra;
        prima_iteratie=false;
    }
    else if(cifra%2!=0&&cifra!=cifra_impara){
        return 0;
    }
}
return 1;
    
}
