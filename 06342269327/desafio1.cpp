#include <iostream>
using namespace std;

int main(){
    double vetor[4];

    cout <<"Preencha os 4 campos com valores numéricos!\n";
    for(int i=0; i<4; i++) {
        cout <<"Insira o " << i+1 <<"º valor: ";
        cin >> vetor[i];
    }
    
    double maximo = vetor[0];
    double minimo = vetor[0]; 

    for (int i=0; i<4; i++) {
        if(vetor[i] < minimo)       minimo = vetor[i];
        else if(vetor[i] > maximo)  maximo = vetor[i];
    }
    
    cout << "O Menor valor é: "<< minimo << "\n";
    cout << "O Maior valor é: "<< maximo << "\n";
        
    return 0;
}