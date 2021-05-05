#include <iostream>
#include<conio.h>
using namespace std;
char cad[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int buscarindice(char a){//usaremos esta funcion para buscar el caracter que tiene nuestra cadena
    for(int i=0;i<26;i++){
        if(cad[i]==tolower(a)){//convertimos a minuscula el caracter ingresado para no tener problemas al momento de buscarlo en nuestro arreglo de caracteres
            return i;
        }
    }
}
void convertToInt(char cadena[],int tamanio,int cadenaAux[]){//convertimos a int las cadenas para poder usar el algoritmo quicksort para ordenarlos lexicologicamente segun su indice
    for(int i=0;i<tamanio;i++){
        cadenaAux[i]=buscarindice(cadena[i]);
}
}
void quicksort(int lista[],int inicio,int final){//seleccionaremos el algoritmo quicksort usado en los ejercicios pasados
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
void convertToChar(char cadena[],int tamanio,int auxiliar[]){//despues de convertir la cadena a int y ordenarlo por su indice con le quicksort ,pasamos a convertirlo de nuevo a cadena e imprimirlo
    for(int i=0;i<tamanio;i++){
        cadena[i]=cad[auxiliar[i]];//con la ayuda de nuestra lista de caracteres de nuestro arreglo alfabetico
    }
    for(int i=0;i<tamanio;i++){
        cout<<cadena[i]<<" ";//Imprimimos los elementos ordenados de la cadena ordenada
    }
}
int main(){
    const int size=26;
    int auxiliar[size];
    char cadenaPrueba[]={'w','z','q','a','f','t','l','h','i','m','k','p','q','t','r','c','d','a','s','g','u','v','q','e','b','d'};
    convertToInt(cadenaPrueba,size,auxiliar);
    quicksort(auxiliar,0,size-1);
    cout<<"Cadena ordenada "<<endl;
    convertToChar(cadenaPrueba,size,auxiliar);
    getch();
    return 0;  
}