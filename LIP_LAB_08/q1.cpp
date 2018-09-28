#include <iostream>
using namespace std;

int func_posic_maior (int v[], int n);

void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);

int main (){
    int m;
    cout<<"Informe o numero de elementos do vetor: \n";
    cin>>m;
    int vetor[m] = {};
    ler_vetor (vetor,m);
    cout<<"A posicao do maior elemento do vetor eh a posicao: "<<func_posic_maior (vetor, m)<<endl;

    return 0;
}

int func_posic_maior (int v[], int n){
    int posicao_maior = 0;

    for(int i = 0 ; i < n ; i++){
        if (v[i] > posicao_maior){
            posicao_maior = i;
        }
    }
    return posicao_maior;
}

void ler_vetor(int v[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<"Digite um elemento do vetor: "<<endl;
        cin>>v[i];
    }
}
void imprimir_vetor(int v[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }
}
