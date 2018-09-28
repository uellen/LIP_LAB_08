#include <iostream>
using namespace std;

void ler_vetor(float v[], int n);
void imprimir_vetor(float v[], int n);
float func_media (float v[], int n);

int main (){
    int n;
    cin>>n;

    float m[n];

    ler_vetor(m,n);
    cout<<"A media eh: "<<func_media(m,n);

    return 0;
}

float func_media (float v[], int n){
    float media = 0.0;
    for (int i = 0 ; i<n ; i++){
        media += v[i];
    }
    media /=n;
    return media;
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
