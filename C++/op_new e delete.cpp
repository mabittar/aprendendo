#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	int tam;
	char *p;
	cout<<"informe o  tamanho do vetor: \n";
	cin >> tam;
p = new char[tam];
strcpy(p, "Universidade Est�cio de S� - Campus Alpha");
cout<<*p<<"\n";

delete p;
system("pause");
return 0;
}
