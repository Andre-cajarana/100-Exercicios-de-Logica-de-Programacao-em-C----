# include <iostream>

using namespace std;
int main()
{
	float n;
	char opcao;

	do
	{

		cout << "Digite un número: ";
		cin >> n;

		if ( n > 0 ){
			cout << "O número " << n << " é POSITIVO! \n";
		
		}else if ( n == 0 ){
				cout << "O número " << n << " é NULO! \n";
			
		}else{
			    cout << "O número " << n << " é NEGATIVO! \n";
		    }

		cout << "Deseja continuar? ";
		cin >> opcao;



	} while (opcao == 'S' or opcao == 's' );

	return 0;




}















