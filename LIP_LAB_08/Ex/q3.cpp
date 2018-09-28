#include <iostream>
using namespace std;

void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);
void maior (int v[], int n);


int main (){
    int n;
    cout<<"Insira o numero de elementos do vetor: ";
    cin>>n;

    int vetor[n];

    ler_vetor(vetor,n);
    maior(vetor,n);

    return 0;
}


void maior (int v[], int n){
    int maior = 0;
    int cont = 0;
    for (int i = 0 ; i < n ; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    for (int i = 0 ; i < n ; i++){
        if(v[i] == maior){
            cont++;
        }
    }
    if (cont>2){
        cout<<"Maior elemento ocorre nas posicoes: ";
        for (int i = 0 ; i < n ; i++){
            if(v[i] == maior){
                    cout<<i<<" ";
            }
        }
    }
    else{
        cout<<"Maior elemento ocorre na posicao: ";
        for (int i = 0 ; i < n ; i++){
            if(v[i] == maior){
                    cout<<i<<" ";
            }
        }
    }
}


void ler_vetor(int v[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<"Digite um elemento do vetor: "<<endl;
        cin>>v[i];
    }
}
