
#include <iostream>
using namespace std;



void trocaValor (float x, float y); //index fun��o trocaValor

void trocaReferencia (float *x,float *y ); //fun��o trocaRefer�ncia de ponteiros

int main()
{

float a,b;

a= 10.0;
b= 20.0;

cout <<"Valor de A= "<<a<<"\tValor de B= "<<b<<"\n";
trocaValor(a,b); //chama fun��o trocaValor
cout <<"Valor de A= "<<a<<"\tValor de B= "<<b<<"\n";
trocaReferencia(&a,&b); //chama fun��o trocaReferencia
cout <<"Valor de A= "<<a<<"\tValor de B= "<<b<<"\n";
return 0;

}


void trocaValor (float x, float y) //descrimina fun��o trocaValor
{
	float aux;
	aux = x;
	x=y;
	y=aux;
	cout <<"Valor de X= "<<x<<"\tValor de Y= "<<y<<"\n";
	
}

void trocaReferencia (float *x, float *y) //descrimina fun��o trocaReferencia
{
	float aux;
	aux=*x;
	*x=*y;
	*y=aux;
	cout <<"Valor de X= "<<*x<<"\tValor de Y= "<<*y<<"\n";
}
