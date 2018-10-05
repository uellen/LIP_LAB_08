#include <iostream>
using namespace std;


void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);
bool validador (int v[] , int n);

int main (){

    int tam = 0;
    cin>>tam;
    int vetor[tam] = {};

    ler_vetor(vetor,tam);

    if(validador(vetor,tam)){
        cout<<"O vetor v digitado eh um conjunto!\n";
    }
    else{
        cout<<"O vetor V digitado nao eh um conjunto!\n";
    }
    return 0;
}

bool validador (int v[] , int n){
    for(int i  = 0 ;  i < n ; i++){
        for(int j = i+1; j < n ; j++){
            if(v[i] == v[j]){
              return false;
            }
        }
    }
    return true;
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
