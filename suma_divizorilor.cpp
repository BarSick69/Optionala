// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int suma_diviz(int n);
int main() {
    int numar=1455;
    cout<<(suma_diviz(numar));
    return 0;
}
int suma_diviz(int n){
    int suma=0;
    int ultimul_divizor_posibil=n/2;
    for(int i=2;i<=ultimul_divizor_posibil;i++){
        if(n%i==0){
            suma+=i;
        }
    }
    return suma;
}
