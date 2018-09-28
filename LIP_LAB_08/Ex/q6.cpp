#include <iostream>
using namespace std;

int func_posic_maior (int v[], int n);

void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);
void concatenar (int v[],int m, int w[], int n, int u[], int x);

int main (){
    int m , n;
    cout<<"Informe o numero de elementos do primeiro vetor: \n";
    cin>>m;
    cout<<"Informe o numero de elementos do segundo vetor: \n";
    cin>>n;
    int x = m+n;

    int vetor[m] = {};
    int wetor[n] = {};
    int uetor[x] = {};
    ler_vetor (vetor,m);
    ler_vetor (wetor,n);

    concatenar(vetor,m,wetor,n,uetor,x);
    imprimir_vetor(uetor,x);

    return 0;
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
void concatenar (int v[],int m, int w[], int n, int u[], int x){
    x = m + n;
    for(int i = 0 ; i < x ; i++){
        if(i<m){
            u[i]=v[i];
        }
        else{
            u[i]=w[i-m];
        }
    }
}
