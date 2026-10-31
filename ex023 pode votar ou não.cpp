#include <iostream>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main()
{
	
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	
	
	int idade;
	char opcao;	
	
	do{	
			
		do{
			cout << "Qual a idade? ";
			cin >> idade;
			
			if (idade >= 110 || idade <= 0){
				cout << "Coloque uma idade válida!!! \n";
			}
			
		}while (idade >= 110 || idade <= 0);
		
			if (idade >= 1 && idade <= 15){
				cout << "Não pode votar!! \n";
			}
			else if (idade >= 16 && idade <= 17){
				cout << "Voto opcional!! \n";
			}
			else{
				cout << "Voto obrigatório!! \n";
	    	}
	    	
	    	cout << "Deseja continuar? ";
	    	cin >> opcao;		
		
	}while (opcao == 'S' || opcao == 's');
	
	system("pause");
	
	return 0;	
	
}