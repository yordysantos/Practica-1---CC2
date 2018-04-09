#include <iostream>
using namespace std;
int longitud(char *s)
{
    return (*s) ? 1 + longitud(s + 1) : 0;
}
int tamano(char s[])
{
	int cont=0;
	for(int i=0;s[i]!='\0';i++){
		cont++;
	}
	return cont;
}
int main(){
	char *p=new char[100];
	char cad[100];
	cout<<"Cadena 1: ";
	gets(p);
	cout<<"Cadena 2: ";
	gets(cad);
	cout<<"Punteros: "<<longitud(p)<<endl;
	cout<<"Arreglos: "<<tamano(cad)<<endl;
}
