#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float a, b, aux;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b:";
    cin >> b;

    aux = a;
    a = b;
    b = aux;

    cout << "O valor de a é " << a << endl;
    cout << "O valor de b é " << b << endl;

    return 0;  




}
