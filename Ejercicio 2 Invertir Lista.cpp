#include <iostream>
#include <conio.h>
using namespace std;
const int largo=1000000;
int arregloAux[largo];
//int *arregloAux;

void ImprimirLista(int arreglo[],int cantidad){//funcion que nos permitira visualizar los elementos del arreglo tanto antes y despues del cambio
    for (int i=0;i<cantidad;i++ ){
        cout<<arreglo[i]<<" ";
    }
}
void LlenarLista(int arreglo[],int cantidad){
    //arregloAux=new int [largo];
    for (int i=0;i<cantidad;i++ ){
        //cout<<"Ingrese el valor "<<endl;
        //cin>>arreglo[i];
        arreglo[i]=i+1;
    }
}
void InvertirLista(int arreglo[],int cantidad){//iteracioneswd
    int aux;
    for(int i=0;i<cantidad/2;i++){
        aux=arreglo[i];
        arreglo[i]=arreglo[cantidad-1-i];
        arreglo[cantidad-1-i]=aux;
    }
}
int main()
{
    LlenarLista(arregloAux,largo);
    cout<<"Lista ordenada en forma sucesiva ascendentemente: "<<endl;
    ImprimirLista(arregloAux,largo);
    cout<<endl;
    InvertirLista(arregloAux,largo);
    cout<<"Lista invertida en forma sucesiva descendentemente: "<<endl;
    ImprimirLista(arregloAux,largo);
    getch();
    return 0;
}