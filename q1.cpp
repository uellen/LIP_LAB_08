#include <iostream>
using namespace std;


void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);
bool computa_vet (int v[], int n, int x);
int main (){

    int n, x;
    cin>>n;
    int v[n] = {};

    ler_vetor(v,n);
    cout<<"Informe o numero buscado: "<<endl;
    cin>>x;

    if(computa_vet(v,n,x)){
        cout<<"O elemento pertence ao conjunto"<<endl;
    }
    else{
        cout<<"O elemento nao pertence ao conjunto"<<endl;
    }

    return 0;
}
bool computa_vet (int v[], int n, int x){
    for(int i = 0 ; i < n ; i++){
        if(v[i]==x){
            return true;
        }
    }
    return false;
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
