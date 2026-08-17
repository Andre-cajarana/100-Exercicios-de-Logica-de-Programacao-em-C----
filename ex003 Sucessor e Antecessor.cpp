#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n, s, a;

    cout << "Digite um número: ";
    cin >> n;

    s = n + 1;
    a = n - 1;

    cout << "O Sucessor de " << n << " é " << s << " \n e o seu Antecessor é " << a <<endl; // \n para quebrar linha.

    return 0;

}
