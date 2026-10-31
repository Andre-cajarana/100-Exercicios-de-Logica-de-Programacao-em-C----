#include <iostream>

using namespace std;
int main() {

	float peso, altura, imc;
	char opcao;

	do {
		do {
			cout << "INFORME O PESO EM KILOS: \n";
			cin >> peso;
			cout << "INFORME A ALTURA ME METROS: \n";
			cin >> altura;

			if(altura <= 0 || peso <= 0) {
				cout <<"Digite um valor válido!";
			}
		} while(altura <= 0 || peso <= 0);

		imc = peso / (altura * altura);

		if(imc < 18.5) {
			cout << "Seu peso é " << peso << " e sua altura é " << altura << ". Seu IMC então equivale a : " << imc << "\n Classificação: ABAIXO DA FAIXA!! \n";

		} else if(imc >= 18.5 && imc < 25.0) {
			cout << "Seu peso é " << peso << " e sua altura é " << altura << ". Seu IMC então equivale a : " << imc << "\n Classificação: FAIXA NORMAL!! \n";

		} else if(imc >= 25.0 && imc < 30.0) {
			cout << "Seu peso é " << peso << " e sua altura é " << altura << ". Seu IMC então equivale a : " << imc << "\n Classificação: ACIMA DA FAIXA!! \n";

		} else {
			cout << "Seu peso é " << peso << " e sua altura é " << altura << ". Seu IMC então equivale a : " << imc << "\n Classificação: FAIXA ELEVADA!! \n";
		}

		do {
			cout << "Deseja realizar a operação novamente? (S/N): ";
			cin >> opcao;

			if(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n') {
				cout << "Informe um valor válido!! \n";
			}

		} while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n');

	} while(opcao == 'S' || opcao == 's');
	
	cout << "OBRIGADO PELA VISITA!!";
	
	return 0;

}