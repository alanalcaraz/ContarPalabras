//Programa que cuenta las palabras de un texto introducido;
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int contarPalabras ();
 
int main()
{
  contarPalabras();  
}

int contarPalabras () //funcion que cuenta palabras;
{
	 char oracion[100];//definimos el tamaño del vector tipo char a 100 caracteres;
     int i, contPalabras = 1;
 
     cout<<"Ingrese una oracion: ";
     cin.getline(oracion, 100); //se reciben los caracteres dentro del vector tipo char;
 
     for(i = 0; i < strlen(oracion); i++)//se emplea la funcion "strlen" la cual cuenta el numero de palabras en base a los espacios o caracteres terminaodres;
          if(oracion[i] == ' ' && i > 0 && oracion[i - 1] != ' ')//mediante comparaciones encuentra un espacio en blanco o caracter terminador;
               contPalabras++; //contador que aumenta despues de encontrar un espacio;
 
     cout<<"Numero de palabras: "<<contPalabras;
 
    
     return 0;
}
