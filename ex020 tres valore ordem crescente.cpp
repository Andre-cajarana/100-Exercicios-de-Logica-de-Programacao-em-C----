#include <iostream>

using namespace std;
int main()
{
		
    int n1, n2, n3;
    char opcao;

    do {
        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;
        cout << "Digite o terceiro número: ";
        cin >> n3;

        // Comparações para determinar a ordem crescente
        bool a = (n1 >= n2) && (n2 >= n3);      // n1 >= n2 >= n3
        bool b = (n1 >= n3) && (n3 >= n2);      // n1 >= n3 >= n2
        bool c = (n2 >= n1) && (n1 >= n3);      // n2 >= n1 >= n3
        bool d = (n2 >= n3) && (n3 >= n1);      // n2 >= n3 >= n1
        bool e = (n3 >= n1) && (n1 >= n2);      // n3 >= n1 >= n2
        bool f = (n3 >= n2) && (n2 >= n1);      // n3 >= n2 >= n1

        if (a) {
            cout << "A ordem crescente dos números é: " << n3 << ", " << n2 << ", " << n1 << endl;
        }
        else if (b) {
            cout << "A ordem crescente dos números é: " << n2 << ", " << n3 << ", " << n1 << endl;
        }
        else if (c) {
            cout << "A ordem crescente dos números é: " << n3 << ", " << n1 << ", " << n2 << endl;
        }
        else if (d) {
            cout << "A ordem crescente dos números é: " << n1 << ", " << n3 << ", " << n2 << endl;
        }
        else if (e) {
            cout << "A ordem crescente dos números é: " << n2 << ", " << n1 << ", " << n3 << endl;
        }
        else if (f) {
            cout << "A ordem crescente dos números é: " << n1 << ", " << n2 << ", " << n3 << endl;
        }

        cout << "\nDeseja ordenar mais números? (S/N): ";
        cin >> opcao;

    } while (opcao == 'S' || opcao == 's');

    return 0;
}