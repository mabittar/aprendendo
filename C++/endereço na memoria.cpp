
#include <iostream>
using namespace std;

int main()
{
 int *ptr_a;

 ptr_a = new int;
 // cria a �rea necess�ria para 01 inteiro e
 // coloca em 'ptr_a' o endere�o desta �rea.

  if (ptr_a == NULL)
  {
    cout << "Mem�ria insuficiente!" << endl;
    exit(1);
  }
  cout << "Endereco de ptr_a: " <<  ptr_a << endl;
  *ptr_a = 19;
  cout << "Conteudo de ptr_a: " << *ptr_a << endl;
  delete ptr_a;
  return 0;
}
