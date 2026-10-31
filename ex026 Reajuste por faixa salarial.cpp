# include <iostream>

using namespace std;
int main() {

	char opcao;
	float sal, nsal;


	do {
		do {

			cout << "Informe o salário: ";
			cin >> sal;
			if(sal < 0) {
				cout << "Informe um valor válido \n";
			}

		} while(sal < 0);

		cout << "Seu salário era de R$ " << sal << ". \n";

		if(sal <= 1500.00) {
			nsal = sal + (sal * 0.15);
			cout << "Ganhou 15% de aumento e passou a ganhar: " << nsal << ". \n";

		} else if (sal >= 1501.00 && sal <= 3000.00) {
			nsal = sal + (sal * 0.30);
			cout << "Ganhou 30% de aumento e passou a ganhar: " << nsal << ". \n";

		} else {
			nsal = sal + (sal * 0.05);
			cout << "Ganhou 05% de aumento e passou a ganhar: " << nsal << ". \n";
		}
		do{		
			cout << "Deseja realizar novamente a operação? (S/N) \n";
			cin >> opcao;
			if(opcao != 'N' && opcao != 'n' && opcao != 'S' && opcao != 's'){
				cout << "Digite a opção válida!! (S/N). \n";
			}
		}while(opcao != 'N' && opcao != 'n' && opcao != 'S' && opcao != 's');
				
	}while(opcao == 'S' || opcao == 's');
	
	return 0;
	
}