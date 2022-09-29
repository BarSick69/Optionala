// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int proxim(int n);
int factorial(int x);
int main() {
    // Write C++ code here
    cout << proxim(600);

    return 0;
}

int proxim(int n){
    int numar_din_stanga=0;
    int numar_din_dreapta=n;
    int cifra=1;
    while (numar_din_stanga<n){
        numar_din_stanga=factorial(cifra);
        cifra++;
    }
    numar_din_stanga=factorial(cifra-2);
    numar_din_dreapta=factorial(cifra-1);
    if(n-numar_din_stanga<=numar_din_dreapta-n){
        return numar_din_stanga;
    }
    return numar_din_dreapta;
    
}

int factorial(int x){
    int produs=1;
    for(int i=1;i<=x;i++){
        produs*=i;
    }
    return produs;
}
