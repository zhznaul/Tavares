#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o terceiro numero: ";
    cin >> c;

    if(a+b>c)
    {
        if (b+c>a)
        {
            if (a+c>b)
            {
                if (a == b)
                {
                    if (a == c)
                    {
                        cout << "Triangulo equilatero.";
                    }
                    else
                    {
                        cout << "Triangulo isosceles.";
                    }
                }
                else
                {
                    if (a == c)
                    {
                        cout << "Triangulo isosceles.";
                    }
                    else
                        if (b == c)
                        {
                            cout << "Triangulo isosceles.";
                        }
                        else
                        {
                        cout << "Triangulo escaleno.";
                        }
                }
            }
            else
                cout << "Nao e triangulo.";
        }
        else
            cout << "Nao e triangulo.";
    }
    else
        cout << "Nao e triangulo.";
}
