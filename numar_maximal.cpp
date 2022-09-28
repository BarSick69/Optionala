// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <cmath>
/*
IDEE:
luam numarul si aflam lungimea lui(l)
impartim(/) numarul la 10^(l-1)
rezultatul obtinut va fi prima cifra care trebuie sa o punem la sfarsit
totodata impartim numarul (%) la 10^(l-1) pentru a afla restul
luam restul si inmultim la 10
adunam la rest numarul obtinut in linia 8
stocam numarul ca fiind cel mai mare
efectuam aceleasi actiuni deja cu numarul obtinut de N ori unde N este lungimea numarului
*/
int numarul_maximal(int n);
int main() {
    int n =4273;
    cout<<numarul_maximal(n);
}

int numarul_maximal(int n){
    int cel_mai_mare_numar=0;
    int i=0;
    int numarul_nou_format=n;
    int numarul_fara_prima_cifra=0;
    int cifra_de_schimb=0;
    int n_lungime=n;
    int lungime=0;
    while(n_lungime!=0){
        n_lungime/=10;
        lungime++;
    }
    while(i<lungime){
        cifra_de_schimb=numarul_nou_format/(pow(10,lungime-1));
        numarul_fara_prima_cifra=numarul_nou_format%(int)(pow(10,lungime-1));
        numarul_nou_format=numarul_fara_prima_cifra*10+cifra_de_schimb;
        cout<<numarul_nou_format<<endl;
        if(numarul_nou_format>cel_mai_mare_numar){
            cel_mai_mare_numar=numarul_nou_format;
        }
        i++;
    }
        
    return cel_mai_mare_numar;
   
}
