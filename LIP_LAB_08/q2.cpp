#include <iostream>
using namespace std;

void cont (int e[], int m, int s[],int n);
void ler_vetor(int v[], int n);
void imprimir_vetor(int v[], int n);

int main (){
    int m;
    int n = 10;
    int svetor[n] = { } ;
    cout<<"Informe o numero de elementos do vetor: \n";
    cin>>m;
    int vetor[m] = {};
    ler_vetor (vetor,m);
    cont (vetor , m , svetor , n);

    return 0;
}


void cont (int e[], int m, int s[], int n){
    for (int i = 0; i < m ; i++){
        switch (e[i]){
            case(0):
                s[0] +=s[0];
                break;
            case (1):
                s[1] += s[1];
                break;
            case (2):
                s[2] += s[2];
                break;
            case (3):
                s[3] += s[3];
                break;
            case (4):
                s[4] += s[4];
                break;
            case (5):
                s[5] += s[5];
                break;
            case (6):
                s[6] += s[6];
                break;
            case (7):
                s[7] += s[7];
                break;
            case (8):
                s[8] += s[8];
                break;
            case (9):
                s[9] += s[9];
                break;
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
