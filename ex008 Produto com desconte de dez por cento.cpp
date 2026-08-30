#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;
#define ds 0.10

int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	
	
	float p, vds, pf;
	
	cout << "Qual o valor do produto? "<< fixed << setprecision(2);
	cin >> p;
	
	vds = p * ds;
	pf = p - vds;
	
	cout << "O produto que custa R$ " << fixed << setprecision(2) << p << " com descontode 10% que corresponde à: " <<vds<< " custa R$ " << pf << endl;
	
	
	return 1;
	
	
}