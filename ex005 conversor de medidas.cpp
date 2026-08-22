#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float metros, centimetros, milimetros;

    cout << "Digite o valor em metros: ";
    cin >> metros;

    centimetros = metros * 100;
    milimetros = metros * 1000;

    cout << metros << " metros equivalem a " << centimetros << " centímetros e " << milimetros << " milímetros." << endl;

    return 0;
}