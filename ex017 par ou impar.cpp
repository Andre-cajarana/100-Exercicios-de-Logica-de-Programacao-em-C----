#include <iostream>
#include <windows.h>


using namespace std;
int main()
{
	SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
	int n;
	char opcao;	
	
	do
	{
		int n;
		char opcao;
		
		
		cout << "Digite um número: ";
		cin >> n;

		if ( n %2 == 0)
		{
			cout << "O número " << n << " é par!\n";
		}
		else
		{
			cout << "O númro " << n << " é ímpar!\n";
		}

		cout << "Deseja continuar? \n";
		cin >> opcao;

	} while (opcao == 'S' || opcao == 's');

	return 0;

}