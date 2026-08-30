#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{   
    SetConsoleOutputCP(65001); // Configura a saída do console para UTF-81000
    
    float sal, tv, com;
    float ns, tcom;
    
    cout << "Qual salário do André: R$ ";
    cin >> sal;
    cout << "Qual o total de faturamento da empresa: R$ ";
    cin >> tv;
    cout << "Qual a porcentagem de comissão o André vai ganhar (%): ";
    cin >> com;
    
    tcom = tv * com / 100.0f;
    ns = sal + tcom;
    
    cout << fixed << setprecision(2);
    cout << "\nAndré ganhava fixo R$ " << sal 
         << ", recebeu comissão de " << setprecision(1) << com << "% do valor do faturamento que foi R$ " 
         << fixed << setprecision(2) << tv 
         << " e passou a receber R$ " << ns 
         << " sendo a comissão de R$ " << tcom << ".\n" << endl;
    
    // Lógica das condições encadeadas corretamente
    if (com >= 70) 
    {
        cout << "RECEBEU ÓTIMA COMISSÃO!!" << endl;
    } 
    else if (com >= 50) 
    {
        cout << "RECEBEU COMISSÃO RAZOÁVEL..." << endl;
    } 
    else 
    {
        cout << "RECEBEU POUCA COMISSÃO." << endl;
    }
    
    return 0;
}
 