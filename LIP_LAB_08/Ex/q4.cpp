#include <iostream>
#include <cmath>
using namespace std;

int func_posic_maior (int v[], int n);

void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);
int produto(int v[], int w[], int n);
float norma (int v[], int n);

int main (){
    int m;
    cout<<"Informe o numero de elementos do vetor: \n";
    cin>>m;
    int vetor[m] = {};
    int wetor[m] = {};
    cout<<"Digite os elementos do vetor V: "<<endl;
    ler_vetor (vetor,m);
    cout<<"Digite os elementos do vetor W: "<<endl;
    ler_vetor (wetor,m);
    cout<<"O produto interno dos vetors V e W eh: "<<produto(vetor,wetor,m)<<endl;
    cout<<"A norma do vetor V: "<<norma(vetor,m)<<endl;
    cout<<"A norma do vetor W: "<<norma(wetor,m)<<endl;


    return 0;
}


void ler_vetor(int v[], int n){
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
}
void imprimir_vetor(int v[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }
}
int produto (int v[], int w[], int m){
    int doc = 0;
    for(int i = 0 ; i < m ; i++){
        doc +=(v[i]*w[i]);
    }
    return doc;
}
float norma (int v[],int n){

    int norma = 0;
    norma = produto(v,v,n);
    norma = pow(norma,1/2);

    return norma;
}
