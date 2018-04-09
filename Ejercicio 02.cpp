#include <iostream>
using namespace std;
int sumare(int a[],int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return a[n-1]+sumare(a,--n);
	}
}
int sumai(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int main(){
	int n;
	cout<<"Longitud: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Suma Recursiva: "<<sumare(a,n)<<endl;
	cout<<"Suma Iterativa: "<<sumai(a,n)<<endl;
}
