#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//defini��o da fun��o ENTER
void EsperaEnter()
{
	int tecla;
	cout <<"Para continuar, pressione ENTER\n";
	
	do
	{
		tecla = getch();
		if (tecla != 13) //se n�o for enter
		{
			cout<<"\a\a\a"; //msg sonora
		}
	} while (tecla!=13); //13 � o codigo ASCII para ENTER
	
}

int main()
{
	cout <<"Processamento 1:...\n";
	EsperaEnter()	; //chama fun��o
	cout <<"Processamento 2:...\n";
	EsperaEnter()	; //chama fun��o	
	cout <<"Processamento 3:...\n";
	EsperaEnter()	; //chama fun��o	
	return 0;
}
