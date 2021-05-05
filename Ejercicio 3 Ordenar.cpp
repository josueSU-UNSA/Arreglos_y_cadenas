#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
const int largo=1000000;
int arregloAux[largo];
void LlenarLista(int arreglo[],int cantidad){//llenaremos la lista con elementos pares consecutivos es decir el doble de cada numero desde el 2 hasta 2 millones
    for (int i=0;i<cantidad;i++ ){
        arreglo[i]=2*(i+1);
    }
}
void InvertirLista(int arreglo[],int cantidad){//utilizamos el algoritmo del ejercicio anterior para invertir la lista para poder posteriormente ordenarlo a traves del algoritmo quicksort
    int aux;
    for(int i=0;i<cantidad/2;i++){
        aux=arreglo[i];
        arreglo[i]=arreglo[cantidad-1-i];
        arreglo[cantidad-1-i]=aux;
    }
}
void quicksort(int lista[],int inicio,int final){//seleccionaremos el algoritmo quicksort
    int piv,left,right,mid;//necesitamos 4 variables auxiliares esto para poder usar la recursion ademas de dividir la lista 
    if(inicio<final){
        piv=lista[inicio];
        left=inicio;
    
        right=final;
        while(left<right){
            while(right>left && lista[right]>piv){
                right-=1;
            }
            if(right>left){
                lista[left]=lista[right];
                left+=1;
            }
            while (left<right && lista[left]<piv){
                left+=1;
            }
            if(left<right){
                lista[right]=lista[left];
                right+=1;
            }
            
        }
        lista[right]=piv;
        mid=right;
        quicksort(lista,inicio,mid-1);
        quicksort(lista,mid+1,final);
        }
}
void mostrarArreglo(int arreglo[],int tamanio){//funcion que mostrara los elementos de los arreglos
    for(int i=0;i<tamanio;i++){
        cout<<arreglo[i]<<" ";
    }
}
int main(){
    LlenarLista(arregloAux,largo);//llenamos la lista con los elementos pares en orden ascendente
    cout<<"Lista ordenada en forma sucesiva ascendentemente: "<<endl;
    mostrarArreglo(arregloAux,largo);//mostramos esto en pantalla
    InvertirLista(arregloAux,largo);//Invertiremos la lista con lo que estaria en orden descendente
    cout<<endl;
    cout<<"Lista invertida en forma sucesiva descendentemente: "<<endl;
    mostrarArreglo(arregloAux,largo);//mostramos esto en pantalla
    cout<<endl;
    cout<<"Lista ordenada en forma sucesiva ascendentemente a traves del algoritmo quicksort: "<<endl;
    quicksort(arregloAux,0,largo-1);//aplicamos el algoritmo quicksort
    mostrarArreglo(arregloAux,largo);//mostramos esto en pantalla
    getch();
    return 0;  
}