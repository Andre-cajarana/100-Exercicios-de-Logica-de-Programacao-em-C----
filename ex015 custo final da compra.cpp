#include <iostream>
#include <iomanip>
#include <windows.h>
#define frete 15.00

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco, subtotal, total;
    int quantidade;

    cout << "Digite o preço do produto: ";
    cin >> preco;
    cout << "Digite a quantidade: ";
    cin >> quantidade;

    subtotal = preco * quantidade;
    total = subtotal + frete;

    cout << "Subtotal: R$ " << fixed << setprecision(2) << subtotal << endl;
    cout << "Frete: R$ " << fixed << setprecision(2) << frete << endl;
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;

}