#include <iostream>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main()
{
	
	SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
	float n1, n2, n3, media;
	char opcao;
	
	do{
		
		cout << "nota 1: \n";
		cin >> n1;		
		cout << "nota 2: \n";
		cin >> n2;
		cout << "nota 3: \n";
		cin >> n3;
		
		media = (n1 + n2 + n3) / 3;
		cout << "A média final é: " << media << ". \n";
		
		if (media >= 7.0){
			cout << "Aluno aprovado! \n";
		}
		else if (media < 7.0 || media >= 4.0){
			cout << "Recuperação! \n";
		}
		else{
			cout << "Aluno reprovado! \n";
		}
		
		cout << "Deseja continuar? \n";
		cin >> opcao;
		
		
	}while (opcao == 'S' || opcao == 's');
	
	system("pause");
	
	return 0;
	
}