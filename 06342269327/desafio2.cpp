#include <iostream>
using namespace std;

void trocaValores(double *valor1, double *valor2) {
    double auxiliar = *valor1;
    *valor1 = *valor2;
    *valor2 = auxiliar;    
}

void ordenaVetor(double vetor[]) {
    double auxiliar;

    for(int i=0; i<3; i++) {   
        for(int j=i+1; j<3; j++) {
            if(vetor[i] > vetor[j])
                trocaValores(&vetor[i], &vetor[j]);
        }
    }
}

void imprimeVetor(double vetor[]) {
    cout << "O vetor em ordem Crescente: ";
    for(int i=0; i<3; i++)
        cout << vetor[i] <<" ";

    cout <<"\n";
}

int main(){
    double vetor[3];

    cout <<"Preencha os 3 campos a seguir com valores diferentes!\n";
    for(int i=0; i<3; i++) {
        cout <<"Insira o " << i+1 <<"º valor(e pressione Enter): ";
        cin >> vetor[i];
    }
    
    ordenaVetor(vetor);
    imprimeVetor(vetor);    

    return 0;
}