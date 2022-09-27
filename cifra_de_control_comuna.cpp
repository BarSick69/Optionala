// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int cifra_de_control(int x);
int main() {
    int numarul_de_cifre=0;
    int interval[999999];
    int a=0;
    int b=0;
    cout<<"a:";
    cin>>a;
    cout<<"\n";
    cout<<"b:";
    cin>>b;
    cout<<"\n";
    for(int i=a;i<=b;i++){
        if(cifra_de_control(i)==a){
            numarul_de_cifre++;
        }
    }
    cout<<"Numarul de cifre cu baza ";
    cout<<a;
    cout<<" Este: ";
    cout<<numarul_de_cifre;
    
        
    
    

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
