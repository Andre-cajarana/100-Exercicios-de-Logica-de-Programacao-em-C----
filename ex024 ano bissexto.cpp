#include <iostream>

using namespace std;
int main()
{
    int ano, anoBisexto, n100;
    char opcao;
    
    do{
         cout <<  "Digite um ano: ";
         cin >> ano;
         
       
        if (ano == 0)
        {
            cout << "DIGITE UM ANO VÁLIDO!!!";
        }
        else if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        {    
            cout << "O ano " << ano << " é bisexto! \n";
        }
        else
        {
            cout << "O ano " << ano << " NÃO é bisexto! \n";
        }
        
        cout << "Deseja contiuar?? ";
        cin >> opcao;
        
    }while (opcao == 'S' || opcao == 's'); 
    
    return 0;
}