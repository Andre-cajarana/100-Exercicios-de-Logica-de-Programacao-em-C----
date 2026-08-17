#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float n1, n2, media;

    cout << "1ª nota: ";
    cin >> n1;
    cout << "2ª nota: ";
    cin >> n2;

    media = n1 + n2;

    cout << "A média final das notas " << n1 << " e " << n2 << " é " << media << endl;

    return 0;

}










