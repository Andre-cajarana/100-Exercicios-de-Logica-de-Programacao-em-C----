#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n1, n2, s;
    cout << "Digite o 1º número: ";
    cin >> n1;
    cout << "Digite o 2º número: ";
    cin >> n2;

    s = n1 + n2;

    cout << "A soma de " << n1 << " com " << n2 << " equivale à: " << s << endl;

    return 0;
}
