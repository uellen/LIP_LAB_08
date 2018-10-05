#include <iostream>
using namespace std;


void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);
void intersecao (int v[], int n, int w[],int m, int uetor[], int& men);
bool validador (int v[] , int n);

int main (){
    int n, m;
    cout<<"Informe o tamanho do primeiro vetor: \n";
    cin>>n;
    cout<<"informe o tamanho do segundo vetor: \n";
    cin>>m;

    int menor = 0;
    if(n<m){
        menor = n;
    }
    else{
        menor = m;
    }

    int vet[n] = {};
    int wet[m] = {};
    int uet[menor] = {};

    cout<<"O primeiro vetor: \n";
    ler_vetor(vet,n);
    cout<<"O segundo vetor: \n";
    ler_vetor(wet,m);


    if (validador(vet, n) && validador (wet,m)){
        intersecao(vet,n,wet,m,uet,menor);
        imprimir_vetor(uet,menor);
    }
    else{
        cout<<"Os vetores digitados não são conjuntos\n";
    }
    return 0;
}
void intersecao (int v[], int n, int w[],int m, int uetor[], int& men){
    men = 0;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i] == w[j]){
                uetor[men]= v[i];
                men++;
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
void imprimir_vetor(int v[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }
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
