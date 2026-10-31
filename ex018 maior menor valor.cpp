# include <iostream>

using namespace std;
int main()
{
	float n1, n2;
	char opcao;

	do
	{
		cout << "Digite um valor: ";
		cin >> n1;

		cout << "Digite o outro valor: ";
		cin >> n2;

		if (n1 > n2)
		{
			cout << "O maior valor é: " << n1 << ".\n" << endl;
		}
		else
		{
			cout << "O maior valor é " << n2 << ".\n" << endl;
		}

		cout << "Deseja continuar? ";
		cin >> opcao;

	} while (opcao == 'S' || opcao == 's');

	return 0;



}
