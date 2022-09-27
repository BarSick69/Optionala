// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <string>
double float_number(string x,string y);
int main() {
    string partea_intreaga="";
    string partea_zecimala="";
    cout<<"partea_intreaga: ";
    cin>>partea_intreaga;
    cout<<"\n";
    cout<<"partea_zecimala: ";
    cin>>partea_zecimala;
    cout<<"\n";
    cout<<float_number(partea_intreaga,partea_zecimala);
    return 0;
}
double float_number(string x,string y){
    string numarul_str=x+y;
    int virgula=y.length();
    cout<<"virgula:";
    cout<<virgula<<endl;
    string impartit_str="1";
    int i=0;
    while(i<virgula){
        impartit_str+="0";
        cout<<"hi";
        i++;
    }
    cout<<"impartit_str:";
    cout<<impartit_str<<endl;
    int numarul_int = stoi(numarul_str);
    double impartit_double = stod(impartit_str);
    double resultat = numarul_int/impartit_double;
    return resultat;
    
}
