#include<iostream>

using namespace std;

int sumaPrimerosNum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n + sumaPrimerosNum(n-1);
	}
}

int main()
{
	int sumaNumeros;
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	sumaNumeros=sumaPrimerosNum(num);
	cout<<"La suma de los primeros numeros es: "<<sumaNumeros<<endl;
	return 0;
	
}