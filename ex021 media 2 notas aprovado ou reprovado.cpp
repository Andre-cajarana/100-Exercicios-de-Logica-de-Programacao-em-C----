#include <iostream>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    float n1, n2, media;
    char opcao;
    
    
    do{
	
    
    cout << "Digite a 1ª nota: ";
    cin >> n1;
    cout << "Digite a 2ª nota: ";
    cin >> n2;
    
    media = (n1 + n2) /2;
    
	
		if (media >= 7.0){
			cout << "O aluno tirou a média " << media << " e foi aprovado!! \n";
		}
		else if (media < 7.0 && media > 4.0){
			cout << "O aluno tirou am média " << media << " e ficou de recuperação!! \n";
		}
		else {
			cout << "O aluno foi reprovado!! \n";
		}
		
		cout << "Deseja continuar? \n";
		cin >> opcao;		
		
	}while (opcao == 'S' || opcao == 's');
	
	return 0;
	
	system("pause");	
	
}