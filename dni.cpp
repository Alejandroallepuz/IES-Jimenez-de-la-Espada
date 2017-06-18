//problema introductorio olimpiada española de informatica. https://olimpiada-informatica.org/problem/dni/dni.pdf

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Comprueba si lleva una X al comienzo como pasa con los nie, y la quita.
int carnetsinletra(string a) {
	if (a[0]=='X') {
		string b=a.erase(0,1);
		int c=atoi(b.c_str());
		return c;
	}
	else {int d=atoi(a.c_str());
		return d;
	}		
}

// Divide el numero del carnet entre 23 y calcula el resto
	int modulo(int carnet) {
	return carnet%23;
}

//asigna la letra a cada resto

char asigna(int resto) {
	string letras="TRWAGMYFPDXBNJZSQVHLCKE";
	char solucion=letras[resto];
	return solucion;
}

//Función principal , te pide el carnet y calcula la letra

int main() {
string dni;
cout<<"Escribe tu DNI o NIE"<<endl;
cin>>dni;
int f=carnetsinletra(dni);
int g=modulo(f);
cout<<asigna(g)<<endl;
}


	
