#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])


{

int vet[10], i, *prtVet; //usa-se o operador de derrefer�ncia (*) para acessar o conte�do de uma posi��o de mem�ria, cujo endere�o est� armazenado em um ponteiro, 
prtVet = &vet[0]; // prtVet recebe o endere�o do primeiro elemento de Vet
cout <<"Informe 10 numeros inteiros: \n";
for(i=0; i<10;i++)
	cin>>*prtVet++; // os endere�os apontados por prtVet s�o modificados pelo operador incremental (++)
	
prtVet = &vet[0]; // prtVet volta a apontar para o primeiro elemento de vet
cout <<"Valores pares do vetor lido: \n";
for (i=0;i<10;i++)
	{
		if(*prtVet%2 == 0)
			cout<<*prtVet<<"\t";
			prtVet++; //os endere�os apontados por prtVet s�o novamente modificados como no la�o anterior

	}

prtVet = NULL; //prtVet recebe NULL para evitar problemas de gerenciamento de mem�ria

return 0;


}
