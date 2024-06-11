#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Crear un arreglo de tipo char de tamaño x en donde x es ingresado por teclado.
//Llena elemento por elemento del arreglo con letras ingresadas por el usuario.
//Muestra el arreglo impreso en forma inversa.
//Todo debe ser manejado con apuntadores.


int main (){
	
 int i,n;
 char *A, *t;
 printf("Usuario indica el tamaño del arreglo: \n");
 scanf ("%d", &n);
 A=(char *)malloc(n*sizeof(int));
 if(A==NULL)exit(1); 
 for(t=A,i=0; i<n; i++,t++){
  printf("Ingresa el valor [%d] :", i);
  scanf("%s", t);
 }
 printf("La inversa de los valores: \n");
 for( t = &A [n-1],i = 0; i < n; i++, t--){
  printf("%c \n", *t);
 }
 free(A);
 system ("Pause");
}

