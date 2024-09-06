#include<iostream>

using namespace std; 

int combinatoria(int n, int k)
{
	if(n==k)
	{
		return 1;
	}
	else if(k==1)
	{
		return n;
	}
	else
	{
		return combinatoria(n-1,k-1)+combinatoria(n-1,k);	
	}
}

int main()
{
	int comb;
	int n, k;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	cout<<"Ingrese el valor de k: ";
	cin>>k;
	comb=combinatoria(n,k);
	cout<<"El resultado de la combinatoria es: "<<comb<<endl;
	return 0;	
}