#include <iostream>
using namespace std;

void cont (int e[], int m, int s[],int n);
void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);
int func_posic_maior (int v[], int n);
int func_maior (int v[], int n);

int main (){
    int m;
    int n = 10;
    int svetor[n] = {};
    cout<<"Informe o numero de elementos do vetor: \n";
    cin>>m;
    int vetor[m] = {};
    ler_vetor (vetor,m);
    cont (vetor , m , svetor , n);

    cout<<"O elemento que mais se repete no vetor eh: "<<func_posic_maior(svetor,n)<<" ocorrendo "<<func_maior(svetor,n)<<" vezes \n";



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

int func_maior (int v[], int n){
    int maior = 0;

    for(int i = 0 ; i < n ; i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

void cont (int e[], int m, int s[], int n){

    for (int i = 0; i < m ; i++){
        if (e[i] == 0) {
            s[0] += 1;
        }
        else if (e[i] == 1) {
            s[1] += 1;
        }
        else if (e[i] == 2) {
            s[2] += 1;
        }
        else if (e[i] == 3) {
            s[3] += 1;
        }
        else if (e[i] == 4) {
            s[4] += 1;
        }
        else if (e[i] == 5) {
            s[5] += 1;
        }
        else if (e[i] == 6) {
            s[6] += 1;
        }
        else if (e[i] == 7) {
            s[7] += 1;
        }
        else if (e[i] == 8) {
            s[8] += 1;
        }
        else if (e[i] == 9 ) {
            s[9] += 1;
        }
    }
    imprimir_vetor(s , n);
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
