// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int nrzero(int n);
int factor(int n);
int main() {
    // Write C++ code here
    cout << nrzero(12);

    return 0;
}

int nrzero(int n){
    n=factor(n);
    int cif=0;
    int nr_de_zero=0;
    while(n!=0){
        cif=n%10;
        n/=10;
        if(cif==0){
            nr_de_zero+=1;
        }
        else{
            break;
        }
    }
    return nr_de_zero;
}
int factor(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
