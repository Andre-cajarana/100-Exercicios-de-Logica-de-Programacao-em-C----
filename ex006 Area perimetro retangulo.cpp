#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	int largura, altura, area, perimetro;
	
	cout << "Digite a largura: ";
	cin >> largura;
	cout << "Digite a altura: ";
	cin >> altura;
	
	area = largura * altura;
	perimetro = 2 * (largura + altura);
	
	cout << "A área do retângulo de "<<largura<<" X "<<altura<<" equivale a: "<<area<<endl;
	cout << "O perímetro do retângulo supramencionado equivale a: "<<perimetro<<endl;
	
	return 1; 
	
	
	
}