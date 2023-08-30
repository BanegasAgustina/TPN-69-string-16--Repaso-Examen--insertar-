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
string CambiarEspacios(string f,string l){
		int i;	
 
   for(i=0; i< f.size();i++)
	{
		if(f[i] == ' ' )
		{
			f[i]=l[0];
			
		}
	
	}

return f;	
}
