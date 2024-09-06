#include<iostream>

using namespace std;

int factorial (int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
	
}

int main()
{
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	int fact=factorial(n);
	cout<<"El factorial de "<<n <<" es: "<<fact;
	return 0;
}
