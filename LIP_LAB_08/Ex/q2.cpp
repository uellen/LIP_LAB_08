#include <iostream>
using namespace std;

void ler_vetor(float v[], int n);
void imprimir_vetor(float v[], int n);
float func_media (float v[], int n);
int menor (float v[], int n);

int main (){
    int n;
    cout<<"Insira o numero de elementos do vetor: ";
    cin>>n;

    float m[n];

    ler_vetor(m,n);
    cout<<"Quantidade de elementos menores que a media: "<<menor(m,n)<<endl<<" Valor da media "<<func_media(m,n);

    return 0;
}


int menor (float v[], int n){
    int cont = 0;
    float media = func_media(v,n);
    for (int i = 0 ; i < n ; i++){
        if(v[i]<media){
            cont++;
        }
    }
    return cont;
}
void ler_vetor(float v[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<"Digite um elemento do vetor: "<<endl;
        cin>>v[i];
    }
}
void imprimir_vetor(float v[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }
}
float func_media (float v[], int n){
    float media = 0.0;
    for (int i = 0 ; i<n ; i++){
        media += v[i];
    }
    media /=n;
    return media;
}
