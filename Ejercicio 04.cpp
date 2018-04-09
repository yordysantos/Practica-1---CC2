#include <iostream>
using namespace std;
void ingresar(int M[][10],int f, int c)
{
	for(int i=0;i<f;i++)
	{
		for (int j=0;j<c;j++)
			{
				cout<<"Ingrese valores: ";
				cin>>M[i][j];
			}
	}
}
void mostrar(int M[][10],int f,int c)
{
	for (int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<M[i][j]<<" ";
		}
	cout<<endl;
	}
}
void multiplicar(int M[][10],int N[][10],int C[][10],int f,int c,int q,int w)
{
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<w;j++)
		{
			C[i][j]=0;
			for(int k=0;k<q;k++)
			{
				C[i][j]=C[i][j]+M[i][k]*N[k][j];
			}
		cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(int argc, char** argv) {
	int A[10][10],f,c;
	int B[10][10],q,w;
	int C[10][10];
	cout<<"Filas 1° matriz"<<endl;
	cin>>f;
	cout<<"Columnas 1° matriz"<<endl;
	cin>>c;
	ingresar(A,f,c);
	cout<<"Filas 2° matriz"<<endl;
	cin>>q;
	cout<<"Columnas 2° matriz"<<endl;
	cin>>w;
	ingresar(B,q,w);
	if(c==q)
	{
		multiplicar(A,B,C,f,c,q,w);
	}
	else
	cout<<"No se puede efectuar";
}
