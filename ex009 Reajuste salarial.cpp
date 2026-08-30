#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	float s, a, ns, va;
	
	cout << "Qual o salário da Clauninéia: R$";
	cin >> s;
	cout << "Qual porcentagem você vai dar de aumento pra ela: ";
	cin >> a;
	
	ns = s + ( s * a / 100);
	va = ns - s;
	
	cout << "Claudinéia ganhou " << fixed << setprecision(2) << a << "% de aumento e passou a ganhar o valor de R$" << ns << "." <<endl;
	cout << "O seu aumento foi de R$ " << fixed << setprecision(2) << va << "." << endl;
	
	return 1; 
	
	
	
}






