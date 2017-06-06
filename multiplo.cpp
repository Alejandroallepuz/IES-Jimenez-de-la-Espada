//multiplos
#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"Introduce el primer número: ";
	cin >>n1;
		cout<<"Introduce el segundo número: ";
	cin>> n2;
	if(n1%n2==0)
	cout<<"El primer número es múltiplo del segundo";
	else
	cout<<"El primer número no es múltiplo del segundo";
	return 0;
}
