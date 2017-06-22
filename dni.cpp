//problema introductorio olimpiada española de informatica. https://olimpiada-informatica.org/problem/dni/dni.pdf

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

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
//probamos a construir un vector con las entrada y otro con las salidas.

int main() {

//Creamos el vector V donde recogemos los carnets

int p; //tamaño del vector de carnets

vector<string> V;
string carnets;
bool control=true;
	

	while(control){
		getline(cin,carnets);
		if (carnets=="") control=false;  //El vector (array) de entradas (DNi y NIE) se va llenando hasta que haya una entrada vacia, en ese momento cambia la variable booleana a false y se termina de hacer el vector
		else {
		V.push_back (carnets);
		}	
	}
	

p=V.size();

int F[p],G[p];
char H[p];

	for (int m=0;m<=p-1;m=m+1) {
	F[m]=carnetsinletra(V[m]);
	G[m]=modulo(F[m]);
	H[m]=asigna(G[m]);
	cout<<H[m]<<endl;
	}
}
