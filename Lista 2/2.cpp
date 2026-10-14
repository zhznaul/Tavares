#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    if (a>b)
    {
        cout << "O maior entre os numeros eh: "<<a;
    }
    else if (b>a)
    {
        cout << "O maior entre os numeros eh: "<<b;
    }
    else
    {
        cout << "Os numeros sao iguais.";
    }
}
