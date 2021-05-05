#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void concatenarCad(char cadena1[],int tamanio1,char cadena2[],int tamanio2){//funcion que me permitira concantenar dos cadenas
    int j=0;//variable que nos permitira agregar aquellos elementos de la segunda lista a la primera
    for (int i=tamanio1;i<tamanio1+tamanio2;i++){//el indice comenzara en el tamanio para que se pueda agregar los elementos al arreglo sin modificar el arreglo
        cadena1[i]=cadena2[j];//realizamos el intercambio
        j++;//incrementamos la variable que nos ayudara con el indice para concatenar
    }
}
void imprimirCad(char cad[],int tamanio){//Funcion que me imprime la cadena
    for(int i=0;i<tamanio;i++){
        cout<<cad[i]<<" ";
    }
}

int main(){
    char cad[1000001]={'1','2','3','4'};//utilizaremos dos arreglos con una longitud maxima
    cout<<"Cadena B"<<endl;
    imprimirCad(cad,8);//Imprimos la cadena antes de hacer la concatenacion
    char cad2[1000000]={'7','9','3','2'};//El segundo arreglo
    cout<<endl;
    cout<<"Cadena A"<<endl;
    imprimirCad(cad2,4);//Imprimos la segunda cadena
    cout<<endl;
    cout<<"Cadena B concatenada a la cadena A"<<endl;
    concatenarCad(cad,4,cad2,4);//concatenamos los arreglos
    imprimirCad(cad,8);//mostramos en pantalla la concatenacion
    getch();
    return 0;  
}