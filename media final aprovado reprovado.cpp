#include <iostream>

using namespace std;
int main()
{
    float n1, n2, n3, mf;
    
    cout << "Primeira nota: ";
    cin >> n1;
    cout << "Segunda nota: ";
    cin >> n2;
    cout << "Terceira nota: ";
    cin >> n3;
    
    mf = (n1 + n2 + n3) / 3;
    
    if (mf < 0.0 || mf > 10.0)
    {
        cout << "MÉDIA INVÁLIDA!!";
    }
    else
    {
        if (mf > 6.0);
        {
        cout << "O aluno tirou " << mf << " e foi APROVADO!";
        }
        else
        {
        cout << "O aluno tirou " << mf << " e está REPROVADO!";    
        }
    }
    return 0;
    
}