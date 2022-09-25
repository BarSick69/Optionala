// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int cifra_de_control(int x);
int main() {
    cout<<"Introduceti numarul: ";
    int x;
    cin>>x;
    cout<<cifra_de_control(x);
    return 0;
}
int cifra_de_control(int x){
    int urm_numar=0;
    int cifra=0;
    while(x!=0){
        cifra=x%10;
        urm_numar+=cifra;
        x/=10;
    }
    if(urm_numar/10!=0){
        urm_numar=cifra_de_control(urm_numar);
    };
    return urm_numar;
};
