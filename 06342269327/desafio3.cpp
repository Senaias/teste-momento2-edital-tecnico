#include <iostream>
using namespace std;

int main(){
    int numero;
    cin >> numero;
    
    if(numero%2 == 0){
        cout << "O numero " << numero <<" é PAR ";
        if(numero > 0)          cout <<"e POSITIVO!\n";
        else if(numero == 0)    cout << "e NEUTRO!\n";
        else                    cout << "e NEGATIVO!\n";
    }
    else{
        cout << "O numero " << numero <<" é ÍMPAR ";
        if(numero > 0)  cout <<"e POSITIVO!\n";
        else            cout << "e NEGATIVO!\n";

    }

    return 0;
}