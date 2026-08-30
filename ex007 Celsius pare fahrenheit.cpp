#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	float c,f;
	
	cout << "Coloque a temperatura: ";
	cin  >> c;
	
	f = c * 9 / 5 + 32;
	
	cout << "A temperatura de "<<c<<" graus Celsius, convertida em Fahrenheit, corresponde a: "<<f<<" graus Fahrenheit."<<endl;
	
	return 1;	
	
}