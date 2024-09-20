#include<iostream>
using namespace std;

int sumaArray(int arr[], int n)
{
	if(n==1)
	{
		return arr[0];
		
	}
	else
	{
		return arr[n-1]+sumaArray(arr,n-1);
	}

}

int main()
{
	int n;
	int arr[]={16, 5, 3, -2, 1};
	n=5;
	cout<<"Los elementos del arreglo: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"El resultado de la suma de los elementos del array es: "<<sumaArray(arr, n)<<endl;
	
	
	return 0;
}