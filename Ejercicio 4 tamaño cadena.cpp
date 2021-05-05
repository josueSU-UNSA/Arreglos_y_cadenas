#include <iostream>
#include <conio.h>
using namespace std;

void llenarLista(char aux[],char cont,int longitud){
    for (int i=0;i<longitud;i++){
        aux[i]=cont;
    }
}
int contarCadena(char cad[]){//Iterativa
    int sum=0;//necesitaremos un contador
    while(cad[sum]!= '\0'){//mientras que el caracter del contador no sea igual al ultimo caracter de cualquier cadena
        sum+=1;//si es asi sumamos 1 a el contador
    }
    return sum;//se retornara la suma del total de caracteres
}
int contarCadenaRec(char cad[],int sum){//recursiva
    if(cad[sum]=='\0'){//caso base
        return 0;//si llegamos al ultimo caracter entonces retorna cero
    }
    else{//caso recursivo
        return 1+contarCadenaRec(cad,sum+1);//de no llegar al ultimo caracter entonces se sumara 1 y seguira recorriendo hasta llegar al ultimo caracter
    }
}

int main()
{
    char muestra[]={'a','b','c','d','e'};
    cout<<contarCadena(muestra)<<endl;
    cout<<contarCadenaRec(muestra,0)<<endl;
    getch();
    return 0;
}