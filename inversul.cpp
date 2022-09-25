// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int inversul(int x);

int numLen(int x){
    int len=0;
    do{
        x/=10;
        len++;
        
    }
    while(x!=0);
    return len;
}

int main() {
    // Write C++ code here
    int a;
    cout << "Introduceti numarul:";
    cin>>a;
    cout<<inversul(a);
    return 0;
}
int inversul(int x){
    int numar_inversat=0;
    int len = numLen(x);
    int putere = len-1;
    int numar;
    
    do{
        
        numar=x%10;
        numar_inversat+=numar*pow(10,putere);
        putere--;
        x=x/10;
    }
    while (x!=0);
    return numar_inversat;
    
}
