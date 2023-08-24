/*Crear un programa que lea por teclado una cadena y un carácter, y reemplace todos los espacios por el carácter.
Ej: mi archivo de texto.txt y _ debería devolver mi_archivo_de_texto.txt*/

#include <bits/stdc++.h>

using namespace std;
string CambiarEspacios(string cad , string eeb); 
int main()
{
    string cadena;
    string espaciosenblanco;
    cout<<"ingrese una cadena de texto:  ";
    getline(cin,cadena);
    cout<<"ingrese caracter:  ";
    cin>>espaciosenblanco;
    
    cout<<CambiarEspacios(cadena ,espaciosenblanco);
    return 0;
}
string CambiarEspacios(string cad , string eeb){
    string n;
   string aux;
   int i;

	for(i=0; i< cad.size();i++)
	{
		if(cad[i] == eeb[0]  )
		{
			n+=eeb+aux+eeb;
			aux=eeb;
			
		}
		else{
			aux+=cad[i];
		
	}
			
	}
	n+=eeb+aux+eeb;
			aux=" ";
return n;	
}
