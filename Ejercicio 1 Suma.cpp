#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
long long tamanio=1000000;
long long *arregloDin;
void llenarListaD(){
    arregloDin=new long long[tamanio];//Esta funcion rellena el arreglo pasado con numeros consecutivos esto con el fin de probar la suma a traves de la formula n(n+1)/2
    for(long long i=0;i<tamanio;arregloDin[i++]=i);//llenamos cada indice con numeros consecutivos comenzando de 1 hasta el 1 millon
}
void mostrarLista(long long arreglo[],long long tamanio){//muestra la lista en pantalla
    cout<<"Lista: "<<endl;
    for(long long i=0;i<tamanio;i++){
        cout<<arreglo[i]<<endl;
    }
}
long long sum(long long arreglo[],long long tamanio){//suma iterativa
    long long suma=0;//contador
    for(long long i=0;i<tamanio;suma+=arreglo[i++]);//se acumula conforme a el elemento que se encuentra el arreglo
    return suma;
}
long long sumRec(long long arreglo[],long long tamanio){ //suma recursiva
    return tamanio==0?arreglo[0]:arreglo[tamanio]+sumRec(arreglo,tamanio-1);//esta expresion ternaria equivale a la expresion original
    //expresion original:
    /*if(tamanio==0){
        return arreglo[0];
        else{
            return arreglo
        }
    }*/
}
int main(){
    llenarListaD();
    cout<<sum(arregloDin,tamanio);//la funcion iterativa que me suma los numeros funciona correctamente
    //cout<<sumRec(arregloDin,tamanio-1);//la funcion recursiva no logra hacer la suma debido a que la cantidad de memoria que se usa es mas de la que se separo para el ide 
    delete [] arregloDin;
    getch();
    return 0;  
}