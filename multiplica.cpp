#include<iostream>

using namespace std;

int multiplicacion(int n, int m)
{
	if(m==0)
	{
		return 0;
	}
	else
	{
		return n+multiplicacion(n,m-1);
	}
	
}
int main()
{
	int multi;
	int n, m;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	cout<<"Ingrese el valor de m: ";
	cin>>m;
	multi=multiplicacion(n,m);
	cout<<"El resultado de la multiplicacion es: "<<multi<<endl;
	return 0;	
}